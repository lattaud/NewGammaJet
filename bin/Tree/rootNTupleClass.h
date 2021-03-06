//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 10 14:03:41 2016 by ROOT version 6.06/01
// from TChain rootTupleTree/tree/
//////////////////////////////////////////////////////////

#pragma once

//// Lines added by make_rootNtupleClass.sh - BEGIN 
using namespace std; 
//// Lines added by make_rootNtupleClass.sh - END 

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>

// Header file for the classes stored in the TTree if any.
#include "vector"
class rootNtupleClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        CHiso_photon;
   Double_t        CosThetaStarAK4;
   Double_t        Energy_photon;
   Double_t        Energy_photonGEN;
   Double_t        Energy_photonSC;
   Double_t        Eta_photon;
   Double_t        Eta_photonGEN;
   Double_t        Eta_photonSC;
   Double_t        HTAK4;
   Double_t        IdTight_j1;
   Double_t        IdTight_j2;
   Double_t        MET;
   Double_t        MET_Eta;
   Double_t        MET_Phi;
   Double_t        MET_Pt;
   Double_t        METRAW;
   Double_t        METoverHTAK4;   
   Double_t        NHiso_photon;
   Double_t        Nak4;
   Double_t        PDGIDAK4_j1;
   Double_t        PDGIDAK4_j2;
   Double_t        PassJSON;
   Double_t        Phi_photon;
   Double_t        Phi_photonGEN;
   Double_t        Phi_photonSC;
   Double_t        Photoniso_photon;
   Double_t        Pt_photon;
   Double_t        Pt_photonGEN;
   Double_t        Pt_photonSC;
   Double_t        RMPF;
   Double_t        RMPFRAW;
   Double_t        Rbalancing;
   Double_t        alpha;
   Double_t        chargedElectromFrac_j1;
   Double_t        chargedElectromFrac_j2;
   Double_t        chargedHadEnFrac_j1;
   Double_t        chargedHadEnFrac_j2;
   Double_t        chargedMult_j1;
   Double_t        chargedMult_j2;
   Double_t        deltaPHIgj;
   Double_t        eleEnFract_j1;
   Double_t        eleEnFract_j2;
   Double_t        etaAK4_j1;
   Double_t        etaAK4_j1GEN;
   Double_t        etaAK4_j2;
   Double_t        etaAK4_j2GEN;
   Double_t        event;
   Double_t        hadTowOverEm;
   Double_t        jetCSVAK4_j1;
   Double_t        jetCSVAK4_j2;
   Double_t        jetJecAK4_j1;
   Double_t        jetJecAK4_j2;
   Double_t        jetJecUncAK4_j1;
   Double_t        jetJecUncAK4_j2;
   Double_t        jetPtAK4matchCaloJet_j1;
   Double_t        jetPtAK4matchCaloJet_j2;
   Double_t        lumi;
   Double_t        metSig;
   Double_t        muEnFract_j1;
   Double_t        muEnFract_j2;
   Double_t        nJet;
   Double_t        nVtx;
   Double_t        neutrElectromFrac_j1;
   Double_t        neutrElectromFrac_j2;
   Double_t        neutrHadEnFrac_j1;
   Double_t        neutrHadEnFrac_j2;
   Double_t        neutrMult_j1;
   Double_t        neutrMult_j2;
   Double_t        pTAK4_j1;
   Double_t        pTAK4_j1GEN;
   Double_t        pTAK4_j2;
   Double_t        pTAK4_j2GEN;
   Double_t        passHLT_Photon120;
   Double_t        passHLT_Photon165;
   Double_t        passHLT_Photon200;
   Double_t        passHLT_Photon30;
   Double_t        passHLT_Photon50;
   Double_t        passHLT_Photon75;
   Double_t        passHLT_Photon90;
   Double_t        phomatchHLT_Photon120; // trigger object matching
   Double_t        phomatchHLT_Photon165;
   Double_t        phomatchHLT_Photon30;
   Double_t        phomatchHLT_Photon50;
   Double_t        phomatchHLT_Photon75;
   Double_t        phomatchHLT_Photon90;
   Double_t        phiAK4_j1;
   Double_t        phiAK4_j2;
   Double_t        photonEnFrac_j1;
   Double_t        photonEnFrac_j2;
   Double_t        photonMult_j1;
   Double_t        photonMult_j2;
   Double_t        ptHat;
   Double_t        rho;
   Double_t        run;
   Double_t        sigmaietaieta_photon;
   Double_t        trueInteraction;
   Double_t        weight;
   Float_t         evtWeightTot;
   Float_t         evtWeightTotA;
   Double_t        METGEN;
   Double_t        METGEN_Eta;
   Double_t        METGEN_Phi;
   Double_t        METGEN_Pt;
   Double_t        PassGenmatching;
   vector<float>   *pT_jets;
   vector<float>   *Eta_jets;
   vector<float>   *Phi_jets;
   vector<float>   *Mass_jets;
   Double_t        *Isfakephoton;

   // List of branches
   TBranch        *b_CHiso_photon;   //!
   TBranch        *b_CosThetaStarAK4;   //!
   TBranch        *b_Energy_photon;   //!
   TBranch        *b_Energy_photonGEN;   //!
   TBranch        *b_Energy_photonSC;   //!
   TBranch        *b_Eta_photon;   //!
   TBranch        *b_Eta_photonGEN;   //!
   TBranch        *b_Eta_photonSC;   //!
   TBranch        *b_HTAK4;   //!
   TBranch        *b_IdTight_j1;   //!
   TBranch        *b_IdTight_j2;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_MET_Eta;   //!
   TBranch        *b_MET_Phi;   //!
   TBranch        *b_MET_Pt;   //!
   TBranch        *b_METRAW;    //!
   TBranch        *b_METoverHTAK4;   //!
   TBranch        *b_NHiso_photon;   //!
   TBranch        *b_Nak4;   //!
   TBranch        *b_PDGIDAK4_j1;   //!
   TBranch        *b_PDGIDAK4_j2;   //!
   TBranch        *b_PassJSON;   //!
   TBranch        *b_Phi_photon;   //!
   TBranch        *b_Phi_photonGEN;   //!
   TBranch        *b_Phi_photonSC;   //!
   TBranch        *b_Photoniso_photon;   //!
   TBranch        *b_Pt_photon;   //!
   TBranch        *b_Pt_photonGEN;   //!
   TBranch        *b_Pt_photonSC;
   TBranch        *b_RMPF;   //!
   TBranch        *b_RMPFRAW;   //!
   TBranch        *b_Rbalancing;   //!
   TBranch        *b_alpha;   //!
   TBranch        *b_chargedElectromFrac_j1;   //!
   TBranch        *b_chargedElectromFrac_j2;   //!
   TBranch        *b_chargedHadEnFrac_j1;   //!
   TBranch        *b_chargedHadEnFrac_j2;   //!
   TBranch        *b_chargedMult_j1;   //!
   TBranch        *b_chargedMult_j2;   //!
   TBranch        *b_deltaPHIgj;   //!
   TBranch        *b_eleEnFract_j1;   //!
   TBranch        *b_eleEnFract_j2;   //!
   TBranch        *b_etaAK4_j1;   //!
   TBranch        *b_etaAK4_j1GEN;   //!
   TBranch        *b_etaAK4_j2;   //!
   TBranch        *b_etaAK4_j2GEN;   //!
   TBranch        *b_event;   //!
   TBranch        *b_hadTowOverEm;   //!
   TBranch        *b_jetCSVAK4_j1;   //!
   TBranch        *b_jetCSVAK4_j2;   //!
   TBranch        *b_jetJecAK4_j1;   //!
   TBranch        *b_jetJecAK4_j2;   //!
   TBranch        *b_jetJecUncAK4_j1;   //!
   TBranch        *b_jetJecUncAK4_j2;   //!
   TBranch        *b_jetPtAK4matchCaloJet_j1;   //!
   TBranch        *b_jetPtAK4matchCaloJet_j2;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_metSig;   //!
   TBranch        *b_muEnFract_j1;   //!
   TBranch        *b_muEnFract_j2;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_neutrElectromFrac_j1;   //!
   TBranch        *b_neutrElectromFrac_j2;   //!
   TBranch        *b_neutrHadEnFrac_j1;   //!
   TBranch        *b_neutrHadEnFrac_j2;   //!
   TBranch        *b_neutrMult_j1;   //!
   TBranch        *b_neutrMult_j2;   //!
   TBranch        *b_pTAK4_j1;   //!
   TBranch        *b_pTAK4_j1GEN;   //!
   TBranch        *b_pTAK4_j2;   //!
   TBranch        *b_pTAK4_j2GEN;   //!
   TBranch        *b_passHLT_Photon120;   //!
   TBranch        *b_passHLT_Photon165;   //!
   TBranch        *b_passHLT_Photon200;   //!
   TBranch        *b_passHLT_Photon30;   //!
   TBranch        *b_passHLT_Photon50;   //!
   TBranch        *b_passHLT_Photon75;   //!
   TBranch        *b_passHLT_Photon90;   //!
   TBranch        *b_phomatchHLT_Photon120;//!
   TBranch        *b_phomatchHLT_Photon165;//!
   TBranch        *b_phomatchHLT_Photon30;//!
   TBranch        *b_phomatchHLT_Photon50;//!
   TBranch        *b_phomatchHLT_Photon75;//!
   TBranch        *b_phomatchHLT_Photon90;//!
   TBranch        *b_phiAK4_j1;   //!
   TBranch        *b_phiAK4_j2;   //!
   TBranch        *b_photonEnFrac_j1;   //!
   TBranch        *b_photonEnFrac_j2;   //!
   TBranch        *b_photonMult_j1;   //!
   TBranch        *b_photonMult_j2;   //!
   TBranch        *b_ptHat;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_run;   //!
   TBranch        *b_sigmaietaieta_photon;   //!
   TBranch        *b_trueInteraction;   //!
   TBranch        *b_weight;   //!
   TBranch        *b_evtWeightTot; //!
   TBranch        *b_evtWeightTotA; //!
   TBranch        *b_METGEN;
   TBranch        *b_METGEN_Eta;
   TBranch        *b_METGEN_Phi;
   TBranch        *b_METGEN_Pt;
   TBranch        *b_PassGenmatching;
   TBranch        *b_pT_jets;   //!
   TBranch        *b_Eta_jets;   //!
   TBranch        *b_Phi_jets;   //!
   TBranch        *b_Mass_jets;   //!
   TBranch        *b_Isfakephoton;

   rootNtupleClass(TTree *tree=0);
   virtual ~rootNtupleClass();
   virtual Int_t    GetEntry(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     InitCache();
};

rootNtupleClass::rootNtupleClass(TTree *tree) : fChain(0) 
{
// // if parameter tree is not specified (or zero), connect the file
// // used to generate this class and read the Tree.
//    if (tree == 0) {
// 
// #ifdef SINGLE_TREE
//       // The following code should be used if you want this class to access
//       // a single tree instead of a chain
//       TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
//       if (!f || !f->IsOpen()) {
//          f = new TFile("Memory Directory");
//       }
//       f->GetObject("rootTupleTree/tree",tree);
// 
// #else // SINGLE_TREE
// 
//       // The following code should be used if you want this class to access a chain
//       // of trees.
//       TChain * chain = new TChain("rootTupleTree/tree","");
//       chain->Add("../../CMSDIJET/responsecomputing/DijetRootTreeAnalyzer/test_reduced_skim.root/rootTupleTree/tree");
//       tree = chain;
// #endif // SINGLE_TREE
// 
//    }
//    Init(tree);
}

rootNtupleClass::~rootNtupleClass()
{
 //  if (!fChain) return;
 //  delete fChain->GetCurrentFile();
}

Int_t rootNtupleClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}

void rootNtupleClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
   
   // Set object pointer
   pT_jets = 0;
   Eta_jets = 0;
   Phi_jets = 0;
   Mass_jets = 0;

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("CHiso_photon", &CHiso_photon, &b_CHiso_photon);
   fChain->SetBranchAddress("CosThetaStarAK4", &CosThetaStarAK4, &b_CosThetaStarAK4);
   fChain->SetBranchAddress("Energy_photon", &Energy_photon, &b_Energy_photon);
   fChain->SetBranchAddress("Energy_photonGEN", &Energy_photonGEN, &b_Energy_photonGEN);
   fChain->SetBranchAddress("Energy_photonSC", &Energy_photonSC, &b_Energy_photonSC);
   fChain->SetBranchAddress("Eta_photon", &Eta_photon, &b_Eta_photon);
   fChain->SetBranchAddress("Eta_photonGEN", &Eta_photonGEN, &b_Eta_photonGEN);
   fChain->SetBranchAddress("Eta_photonSC", &Eta_photonSC, &b_Eta_photonSC);
   fChain->SetBranchAddress("HTAK4", &HTAK4, &b_HTAK4);
   fChain->SetBranchAddress("IdTight_j1", &IdTight_j1, &b_IdTight_j1);
   fChain->SetBranchAddress("IdTight_j2", &IdTight_j2, &b_IdTight_j2);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("MET_Eta", &MET_Eta, &b_MET_Eta);
   fChain->SetBranchAddress("MET_Phi", &MET_Phi, &b_MET_Phi);
   fChain->SetBranchAddress("MET_Pt", &MET_Pt, &b_MET_Pt);
   fChain->SetBranchAddress("METRAW", &METRAW, &b_METRAW);
   fChain->SetBranchAddress("METoverHTAK4", &METoverHTAK4, &b_METoverHTAK4);
   fChain->SetBranchAddress("NHiso_photon", &NHiso_photon, &b_NHiso_photon);
   fChain->SetBranchAddress("Nak4", &Nak4, &b_Nak4);
   fChain->SetBranchAddress("PDGIDAK4_j1", &PDGIDAK4_j1, &b_PDGIDAK4_j1);
   fChain->SetBranchAddress("PDGIDAK4_j2", &PDGIDAK4_j2, &b_PDGIDAK4_j2);
   fChain->SetBranchAddress("PassJSON", &PassJSON, &b_PassJSON);
   fChain->SetBranchAddress("Phi_photon", &Phi_photon, &b_Phi_photon);
   fChain->SetBranchAddress("Phi_photonGEN", &Phi_photonGEN, &b_Phi_photonGEN);
   fChain->SetBranchAddress("Phi_photonSC", &Phi_photonSC, &b_Phi_photonSC);
   fChain->SetBranchAddress("Photoniso_photon", &Photoniso_photon, &b_Photoniso_photon);
   fChain->SetBranchAddress("Pt_photon", &Pt_photon, &b_Pt_photon);
   fChain->SetBranchAddress("Pt_photonGEN", &Pt_photonGEN, &b_Pt_photonGEN);
   fChain->SetBranchAddress("Pt_photonSC", &Pt_photonSC, &b_Pt_photonSC);
   fChain->SetBranchAddress("RMPF", &RMPF, &b_RMPF);
   fChain->SetBranchAddress("RMPFRAW", &RMPFRAW, &b_RMPFRAW);
   fChain->SetBranchAddress("Rbalancing", &Rbalancing, &b_Rbalancing);
   fChain->SetBranchAddress("alpha", &alpha, &b_alpha);
   fChain->SetBranchAddress("chargedElectromFrac_j1", &chargedElectromFrac_j1, &b_chargedElectromFrac_j1);
   fChain->SetBranchAddress("chargedElectromFrac_j2", &chargedElectromFrac_j2, &b_chargedElectromFrac_j2);
   fChain->SetBranchAddress("chargedHadEnFrac_j1", &chargedHadEnFrac_j1, &b_chargedHadEnFrac_j1);
   fChain->SetBranchAddress("chargedHadEnFrac_j2", &chargedHadEnFrac_j2, &b_chargedHadEnFrac_j2);
   fChain->SetBranchAddress("chargedMult_j1", &chargedMult_j1, &b_chargedMult_j1);
   fChain->SetBranchAddress("chargedMult_j2", &chargedMult_j2, &b_chargedMult_j2);
   fChain->SetBranchAddress("deltaPHIgj", &deltaPHIgj, &b_deltaPHIgj);
   fChain->SetBranchAddress("eleEnFract_j1", &eleEnFract_j1, &b_eleEnFract_j1);
   fChain->SetBranchAddress("eleEnFract_j2", &eleEnFract_j2, &b_eleEnFract_j2);
   fChain->SetBranchAddress("etaAK4_j1", &etaAK4_j1, &b_etaAK4_j1);
   fChain->SetBranchAddress("etaAK4_j1GEN", &etaAK4_j1GEN, &b_etaAK4_j1GEN);
   fChain->SetBranchAddress("etaAK4_j2", &etaAK4_j2, &b_etaAK4_j2);
   fChain->SetBranchAddress("etaAK4_j2GEN", &etaAK4_j2GEN, &b_etaAK4_j2GEN);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("hadTowOverEm", &hadTowOverEm, &b_hadTowOverEm);
   fChain->SetBranchAddress("jetCSVAK4_j1", &jetCSVAK4_j1, &b_jetCSVAK4_j1);
   fChain->SetBranchAddress("jetCSVAK4_j2", &jetCSVAK4_j2, &b_jetCSVAK4_j2);
   fChain->SetBranchAddress("jetJecAK4_j1", &jetJecAK4_j1, &b_jetJecAK4_j1);
   fChain->SetBranchAddress("jetJecAK4_j2", &jetJecAK4_j2, &b_jetJecAK4_j2);
   fChain->SetBranchAddress("jetJecUncAK4_j1", &jetJecUncAK4_j1, &b_jetJecUncAK4_j1);
   fChain->SetBranchAddress("jetJecUncAK4_j2", &jetJecUncAK4_j2, &b_jetJecUncAK4_j2);
   fChain->SetBranchAddress("jetPtAK4matchCaloJet_j1", &jetPtAK4matchCaloJet_j1, &b_jetPtAK4matchCaloJet_j1);
   fChain->SetBranchAddress("jetPtAK4matchCaloJet_j2", &jetPtAK4matchCaloJet_j2, &b_jetPtAK4matchCaloJet_j2);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("metSig", &metSig, &b_metSig);
   fChain->SetBranchAddress("muEnFract_j1", &muEnFract_j1, &b_muEnFract_j1);
   fChain->SetBranchAddress("muEnFract_j2", &muEnFract_j2, &b_muEnFract_j2);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("neutrElectromFrac_j1", &neutrElectromFrac_j1, &b_neutrElectromFrac_j1);
   fChain->SetBranchAddress("neutrElectromFrac_j2", &neutrElectromFrac_j2, &b_neutrElectromFrac_j2);
   fChain->SetBranchAddress("neutrHadEnFrac_j1", &neutrHadEnFrac_j1, &b_neutrHadEnFrac_j1);
   fChain->SetBranchAddress("neutrHadEnFrac_j2", &neutrHadEnFrac_j2, &b_neutrHadEnFrac_j2);
   fChain->SetBranchAddress("neutrMult_j1", &neutrMult_j1, &b_neutrMult_j1);
   fChain->SetBranchAddress("neutrMult_j2", &neutrMult_j2, &b_neutrMult_j2);
   fChain->SetBranchAddress("pTAK4_j1", &pTAK4_j1, &b_pTAK4_j1);
   fChain->SetBranchAddress("pTAK4_j1GEN", &pTAK4_j1GEN, &b_pTAK4_j1GEN);
   fChain->SetBranchAddress("pTAK4_j2", &pTAK4_j2, &b_pTAK4_j2);
   fChain->SetBranchAddress("pTAK4_j2GEN", &pTAK4_j2GEN, &b_pTAK4_j2GEN);
   fChain->SetBranchAddress("passHLT_Photon120", &passHLT_Photon120, &b_passHLT_Photon120);
   fChain->SetBranchAddress("passHLT_Photon165", &passHLT_Photon165, &b_passHLT_Photon165);
   fChain->SetBranchAddress("passHLT_Photon200", &passHLT_Photon200, &b_passHLT_Photon200);
   fChain->SetBranchAddress("passHLT_Photon30", &passHLT_Photon30, &b_passHLT_Photon30);
   fChain->SetBranchAddress("passHLT_Photon50", &passHLT_Photon50, &b_passHLT_Photon50);
   fChain->SetBranchAddress("passHLT_Photon75", &passHLT_Photon75, &b_passHLT_Photon75);
   fChain->SetBranchAddress("passHLT_Photon90", &passHLT_Photon90, &b_passHLT_Photon90);
   fChain->SetBranchAddress("phomatchHLT_Photon120", &phomatchHLT_Photon120, &b_phomatchHLT_Photon120);//!
   fChain->SetBranchAddress("phomatchHLT_Photon165", &phomatchHLT_Photon165, &b_phomatchHLT_Photon165);//!
   fChain->SetBranchAddress("phomatchHLT_Photon30",  &phomatchHLT_Photon30,  &b_phomatchHLT_Photon30);//!
   fChain->SetBranchAddress("phomatchHLT_Photon50",  &phomatchHLT_Photon50,  &b_phomatchHLT_Photon50);//!
   fChain->SetBranchAddress("phomatchHLT_Photon75",  &phomatchHLT_Photon75,  &b_phomatchHLT_Photon75);//!
   fChain->SetBranchAddress("phomatchHLT_Photon90",  &phomatchHLT_Photon90,  &b_phomatchHLT_Photon90);//!
   fChain->SetBranchAddress("phiAK4_j1", &phiAK4_j1, &b_phiAK4_j1);
   fChain->SetBranchAddress("phiAK4_j2", &phiAK4_j2, &b_phiAK4_j2);
   fChain->SetBranchAddress("photonEnFrac_j1", &photonEnFrac_j1, &b_photonEnFrac_j1);
   fChain->SetBranchAddress("photonEnFrac_j2", &photonEnFrac_j2, &b_photonEnFrac_j2);
   fChain->SetBranchAddress("photonMult_j1", &photonMult_j1, &b_photonMult_j1);
   fChain->SetBranchAddress("photonMult_j2", &photonMult_j2, &b_photonMult_j2);
   fChain->SetBranchAddress("ptHat", &ptHat, &b_ptHat);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("sigmaietaieta_photon", &sigmaietaieta_photon, &b_sigmaietaieta_photon);
   fChain->SetBranchAddress("trueInteraction", &trueInteraction, &b_trueInteraction);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("evtWeightTot", &evtWeightTot, &b_evtWeightTot);
   fChain->SetBranchAddress("evtWeightTotA", &evtWeightTotA, &b_evtWeightTotA);
   fChain->SetBranchAddress("METGEN", &METGEN, &b_METGEN);
   fChain->SetBranchAddress("METGEN_Eta", &METGEN_Eta, &b_METGEN_Eta);
   fChain->SetBranchAddress("METGEN_Phi", &METGEN_Phi, &b_METGEN_Phi);
   fChain->SetBranchAddress("METGEN_Pt", &METGEN_Pt, &b_METGEN_Pt);
   fChain->SetBranchAddress("PassGenmatching",&PassGenmatching,&b_PassGenmatching);
   fChain->SetBranchAddress("pT_jets", &pT_jets, &b_pT_jets);
   fChain->SetBranchAddress("Eta_jets", &Eta_jets, &b_Eta_jets);
   fChain->SetBranchAddress("Phi_jets", &Phi_jets, &b_Phi_jets);
   fChain->SetBranchAddress("Mass_jets", &Mass_jets, &b_Mass_jets);
   fChain->SetBranchAddress("Isfakephoton", &Isfakephoton, &b_Isfakephoton);
   InitCache();
}

void rootNtupleClass::InitCache() {
  //fChain->SetCacheSize(-1);
  //fChain->AddBranchToCache("*");
}
