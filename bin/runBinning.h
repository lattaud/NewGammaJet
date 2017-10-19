#pragma once

#include <cmath>
#include <vector>
#include <utility>

class RunBinning {
  public:
    RunBinning() {
      fillRunBins();
    }

    int getRunBin(int n) {
      std::vector<std::pair<int, int> >::const_iterator it = mRunBins.begin();
      for (; it != mRunBins.end(); ++it) {
        std::pair<int, int> bin = *it;
        if (n >= bin.first && n <= bin.second) {
          return it - mRunBins.begin();
        }
      }

      return -1;
    }

    size_t size() const {
      return mRunBins.size();
    }

    std::pair<int, int> getBinValue(int bin) const {
      return mRunBins[bin];
    }

    std::vector<std::pair<int, int> > getBinning(int n = -1) const {
      if (n < 0) {
        n = size();
      }
      return std::vector<std::pair<int, int> >(mRunBins.begin(), mRunBins.begin() + n);
    }

    std::vector<std::pair<int, int> > getBinning(unsigned int from, unsigned int to) const {
      if (to > size()) {
        to = size();
      }

      return std::vector<std::pair<int, int> >(mRunBins.begin() + from, mRunBins.begin() + to);
    }

  private:
    std::vector<std::pair<int, int> > mRunBins;

    void fillRunBins() {
      // bins reader: >= && <
     /* mRunBins.push_back(std::make_pair(256630, 257613)); // 210.285 pb-1
      mRunBins.push_back(std::make_pair(257614, 257969)); // 223.401 pb-1
      mRunBins.push_back(std::make_pair(258129, 258177)); // 246.562 pb-1
      mRunBins.push_back(std::make_pair(258211, 258448)); // 229.871 pb-1
      mRunBins.push_back(std::make_pair(258655, 258713)); // 205.806 pb-1
      mRunBins.push_back(std::make_pair(258714, 259685)); // 234.228 pb-1
      mRunBins.push_back(std::make_pair(259686, 259891)); // 208.717 pb-1
      mRunBins.push_back(std::make_pair(260373, 260532)); // 246.805 pb-1
      mRunBins.push_back(std::make_pair(260533, 260627)); // 287.615 pb-1
     mRunBins.push_back(std::make_pair(260628, 1000000)); */// 2016 Collisions
      mRunBins.push_back(std::make_pair(297046,  297223)); // almost 1/fb in each bin
      mRunBins.push_back(std::make_pair(297223, 297484)); // 
      mRunBins.push_back(std::make_pair(297485, 299602)); // 
      mRunBins.push_back(std::make_pair(297603, 299064)); // RunB
      mRunBins.push_back(std::make_pair(299065, 299367)); //Run C starting from now on 
      mRunBins.push_back(std::make_pair(299368, 300122)); // 
      mRunBins.push_back(std::make_pair(300123, 300463));
      mRunBins.push_back(std::make_pair(300464, 300575));
      mRunBins.push_back(std::make_pair(300576, 300784));
      mRunBins.push_back(std::make_pair(300785, 301297));
      mRunBins.push_back(std::make_pair(301298, 301460)); 
      mRunBins.push_back(std::make_pair(301461, 301958)); 
      mRunBins.push_back(std::make_pair(301959, 302029)); 
      mRunBins.push_back(std::make_pair(302030, 302343)); // 
       // 2017 Collisions
     
      // end of pp collision 2015
    }

};
