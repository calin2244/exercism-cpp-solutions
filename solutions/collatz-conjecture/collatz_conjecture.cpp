#include "collatz_conjecture.h"

#include <algorithm>

namespace collatz_conjecture 
{
    int steps(int a)
    {
        if(a == 1)
            return 0;
        else if(a < 1)
            throw std::domain_error("no");
        int s = 0;
        while(a != 1)
        {
            if(a % 2 == 0)
            {
                a /= 2;
                s++;
            }
            else
            {
                a = a*3 + 1;
                s++;
            }
        }
        return s;
    }
}  // namespace collatz_conjecture
