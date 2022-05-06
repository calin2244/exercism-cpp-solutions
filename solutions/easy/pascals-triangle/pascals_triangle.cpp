#include "pascals_triangle.h"

namespace pascals_triangle {
    std::vector<std::vector<int>> generate_rows(int rows){
      
        std::vector<std::vector<int>> pascal;
        
        if(rows == 0)
            return std::vector<std::vector<int>>();
        
        pascal.push_back(std::vector<int>{1});
        if(rows == 1)
            return pascal;
    
        pascal.push_back(std::vector<int>{1, 1});
        if(rows == 2)
            return pascal;       
    
        for(int i = 2; i < rows; ++i){
            std::vector<int> to_add(i+1);
            to_add[0] = 1, to_add[to_add.size()-1] = 1;
            for(int j = 1; j<i; ++j){
                to_add[j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
            pascal.push_back(to_add);
        }
        return pascal;
    }
}  // namespace pascals_triangle
