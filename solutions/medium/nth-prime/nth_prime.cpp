#include "nth_prime.h"

#include <algorithm>
#include <vector>
#include <string>

#define MAX_SIZE 10000005

namespace nth_prime 
{
    int nth(int x)
    {
        if(x == 0)
            throw std::domain_error("what");
        std::vector<bool> isPrime(MAX_SIZE);
        std::fill(isPrime.begin(), isPrime.end(), true);
        std::vector<int> primes;
        for(int p = 2; p * p < MAX_SIZE; ++p)
        {
            if(isPrime[p] == true)
            {
                for(int i = p*p; i<MAX_SIZE; i+=p)
                    isPrime[i] = false;
            }
        }

        for(int p = 2; p < MAX_SIZE; p++)
            if(isPrime[p])
                primes.push_back(p);

        return primes[x-1];
    }
}  // namespace nth_prime
