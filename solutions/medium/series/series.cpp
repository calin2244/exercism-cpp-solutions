#include "series.h"

namespace series{

    std::vector<int> digits(const std::string& s){
        std::vector<int> the_digits;
        for(char k: s){
            the_digits.push_back(k-'0');
        }
        return the_digits;
    }

    std::vector<std::vector<int>> slice(const std::string& s, size_t n){
        
        std::vector<std::vector<int>> the_slices;

        if(n > s.length())
            throw std::domain_error("N cannot be bigger than string's length");
        
        for(size_t i = 0; i <= s.length() - n; i++){
            
            std::vector<int> v1;
            size_t copy = i;
            for(size_t j = 0; j < n; ++j){
                v1.push_back(s[copy++]-'0');
            }
        
            the_slices.push_back(v1);
        }

        return the_slices;
    }
} //end of namespace series

