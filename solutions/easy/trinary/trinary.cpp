#include "trinary.h"

namespace trinary {
    int to_decimal(const std::string &s){
        int p = 0, number = 0;
        for(int i = s.length()-1; i >=0; i--){
            if(s[i] >= 'a' && s[i] <= 'z')
                return 0;
            number = number + (s[i] - '0') * pow(3, p);
            p++;
        }
        return number;
    }
}  // namespace trinary
