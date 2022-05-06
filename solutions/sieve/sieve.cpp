#include "sieve.h"

#define MAX_SIZE 10000

namespace sieve {

    std::vector<int> primes(int limit){
        std::vector<bool> isPrime(limit+1);
        std::fill(isPrime.begin(), isPrime.end(), true);
        for(int p = 2; p * p <= limit; ++p){
            if(isPrime[p]){
                
                for(int i = p * p; i <= limit; i += p)
                    isPrime[i] = false;
            }
        }

        std::vector<int> primeNumbers;
        for(int i = 2; i <= limit; ++i)
            if(isPrime[i])
                primeNumbers.push_back(i);

        return primeNumbers;
    }
}  // namespace sieve