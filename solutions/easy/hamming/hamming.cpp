#include "hamming.h"

#include <string>
#include <algorithm>

namespace hamming {
    ul compute(string a, string b)
    {
        if(a.length() != b.length())
            throw std::domain_error("no");
        ul ham_dist = 0;
        
        for(unsigned long int i = 0; i < a.length(); ++i)
        {
            if(a[i] != b[i])
                ham_dist++;
        }
        return ham_dist;
    }
}  // namespace hamming
