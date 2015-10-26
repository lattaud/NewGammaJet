#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

#include "TVirtualFitter.h"
#include "TGraphErrors.h"
#include "TChain.h"
#include <TFile.h>
#include <TParameter.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TProfile.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TAxis.h>
#include <TF1.h>
#include <TMath.h>
#include <TStyle.h>
#include "TPaveText.h"

#define LIGHT_RED TColor::GetColor(0xcf, 0xa0, 0xa1)

using namespace std;

int main(int argc, char* argv[]) {

  cout<<"Running MC_ptPhot_scaled.c"<<endl;

  TFile f1("/cmshome/fpreiato/GammaJet/CMSSW_7_4_14/src/JetMETCorrections/GammaJetFilter/analysis/tuples/GJET_MC/PhotonJet_GJet_Pt15To6000_ReReco_Finalized_alphacut030_PFlowAK4chs.root");
  TTree* Misc_mc = (TTree*) f1.Get("misc");
  TTree* PhotonTree_mc = (TTree*) f1.Get("photon");
  uint64_t totalEvents_mc = PhotonTree_mc->GetEntries();
  cout<< totalEvents_mc << endl;

  ///////////////////////////////////////////////////////////////////
  
  double arraybins[7] = {40, 60, 85,100,130,175,5000};
  
  TH1D *h_mc = new TH1D("h_mc", "h_mc", 6, arraybins);
  
  //loop
  for (uint64_t i = 0; i < totalEvents_mc; i++) {      
    //for (uint64_t i = 0; i < 10000; i++) {      
    if(i == 0 || i % 5000 == 0) cout<< "Events processed "<< i <<endl;
    
    PhotonTree_mc  -> GetEntry(i);
    Misc_mc             -> GetEntry(i);
    
    double gen_weight;
    Misc_mc->SetBranchAddress("generator_weight", &gen_weight);
    
    //    cout<< "generator_weight   " << gen_weight<<endl;
    
    float event_weight;
    Misc_mc->SetBranchAddress("evtWeightTot",&event_weight);
    
    //    cout<< "event_weight   "<< event_weight <<endl;

    float ptPhot;
    PhotonTree_mc->SetBranchAddress("pt",&ptPhot);
    
    //    cout<< ptPhot <<endl;
    
        UInt_t nvertex_mc;
        Misc_mc->SetBranchAddress("nvertex", &nvertex_mc);   
        
	//        cout<< "nvertex   "<< nvertex_mc <<endl;
    
	if(ptPhot < 40 || ptPhot >5000) continue;

    TFile f_PU("/cmshome/fpreiato/GammaJet/CMSSW_7_4_14/src/JetMETCorrections/GammaJetFilter/analysis/PUReweighting/NvertexPU_ReReco_23Oct2015.root");                                  
    TH1D *h_PU;  
    
    if(ptPhot >= 40 && ptPhot < 60)          h_PU = (TH1D*)f_PU.Get("h_ratio_ptPhot_40_60");                                                                        
    if(ptPhot >= 60 && ptPhot < 85)          h_PU = (TH1D*)f_PU.Get("h_ratio_ptPhot_60_85");                                                                        
    if(ptPhot >= 85 && ptPhot < 100)        h_PU = (TH1D*)f_PU.Get("h_ratio_ptPhot_85_100");                                                                        
    if(ptPhot >= 100 && ptPhot < 130)      h_PU = (TH1D*)f_PU.Get("h_ratio_ptPhot_100_130");                                                                        
    if(ptPhot >= 130 && ptPhot < 175)      h_PU = (TH1D*)f_PU.Get("h_ratio_ptPhot_130_175");                                                                        
    if(ptPhot >= 175 && ptPhot <= 5000)    h_PU = (TH1D*)f_PU.Get("h_ratio_ptPhot_175_5000");  
    
    int bin = h_PU -> FindBin(nvertex_mc);                                                                                                                                         
    double PUWeight = h_PU->GetBinContent(bin);
    
    //    cout<< "PU_weight   "<< PUWeight <<endl;
    
    double Weight = event_weight*gen_weight*PUWeight;
    
    h_mc -> Fill(ptPhot,Weight);
    
  }
  
    TFile f_new("MC_ptPhot_scaled.root", "recreate");          
    
    h_mc  -> Write();      
    f_new.Close();

    cout<<"MC_ptPhot_scaled.root produced"<<endl;
    
}//main





