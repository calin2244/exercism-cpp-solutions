#include "binary_search.h"

namespace binary_search {
    int find(const std::vector<int> data, const int target){
        int st = 0, dr = data.size()-1;
        while(st <= dr){
            int m = st + (dr - st) / 2;
            if(data[m] == target){
                return m;
            }

            if(data[m] > target){
                dr = m - 1;
            }
            else st = m + 1;
        }

        throw std::domain_error("Not in vector");
    }
}  // namespace binary_search
