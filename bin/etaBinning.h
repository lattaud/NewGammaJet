#pragma once

#include <cmath>
#include <vector>
#include <string>
#include <utility>

struct EtaBin {
  std::pair<float, float> bin;
  std::string name;
  std::string title;
};

class EtaBinning {
  public:
    EtaBinning() {
      fillEtaBins();
    }

    int getBin(float eta) const {
      eta = fabs(eta);
      std::vector<EtaBin>::const_iterator it = mEtaBins.begin();
      for (; it != mEtaBins.end(); ++it) {
        EtaBin bin = *it;
        if (eta >= bin.bin.first && eta < bin.bin.second) {
          return it - mEtaBins.begin();
        }
      }

      return -1;
    }

    std::string getBinName(int bin) const {
      return mEtaBins[bin].name;
    }

    std::string getBinTitle(int bin) const {
      return mEtaBins[bin].title;
    }

    std::pair<float, float> getBinValue(int bin) const {
      return mEtaBins[bin].bin;
    }


    size_t size() const {
      return mEtaBins.size();
    }
    
    std::vector< EtaBin > getBinning(int n = -1) const {
      if (n < 0) {
        n = size();
      }
      return std::vector<EtaBin >(mEtaBins.begin(), mEtaBins.begin() + n);
    }
    

  private:
    std::vector<EtaBin> mEtaBins;

    void fillEtaBins() {

      // official bin 
      EtaBin bin;

      bin.bin = std::make_pair(0., 0.783);
      bin.name = "eta0008";
      bin.title = "|#eta| < 0.8";  
      mEtaBins.push_back(bin);
      
      bin.bin = std::make_pair(0.783, 1.305);
      bin.name = "eta0813";
      bin.title = "0.8 #leq |#eta| < 1.3";  
      mEtaBins.push_back(bin);
      
      bin.bin = std::make_pair(1.305, 1.93);
      bin.name = "eta1319";
      bin.title = "1.3 #leq |#eta| < 2.0";
      mEtaBins.push_back(bin);

      bin.bin = std::make_pair(1.93, 2.5);
      bin.name = "eta1925";
      bin.title = "2.0 #leq |#eta| < 2.5";
      mEtaBins.push_back(bin);

      bin.bin = std::make_pair(2.5, 2.964);
      bin.name = "eta2530";
      bin.title = "2.5 #leq |#eta| < 3.0";
      mEtaBins.push_back(bin);

      bin.bin = std::make_pair(2.964, 3.2);
      bin.name = "eta3032";
      bin.title = "3.0 #leq |#eta| < 3.2";
      mEtaBins.push_back(bin);

      bin.bin = std::make_pair(3.2, 5.191);
      bin.name = "eta3252";
      bin.title = "3.2 #leq |#eta| < 5.2";
      mEtaBins.push_back(bin);

    }
};
