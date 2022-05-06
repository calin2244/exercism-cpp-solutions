#include "prime_factors.h"

namespace prime_factors {
    std::vector<int> of(int n)
    {
        int d = 2;
        std::vector<int> prime_divisors;
        while(n > 1)
        {
            int p = 0;
            while(n % d == 0)
            {
                n/=d;
                p++;
            }
            
            if(p)
                while(p)
                {    
                    prime_divisors.push_back(d);
                    p--;
                }
           
            d++;
            if(n > 1 && d * d > n)
                d = n;
        }
        return prime_divisors;
    }
}  // namespace prime_factors
