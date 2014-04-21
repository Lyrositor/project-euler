/**
 * Project Euler Problems
 */

#include "common.hh"

unsigned long long Math::Factorial(unsigned long long n) {
    unsigned long long f = 1;
    for (unsigned long long i = 2; i <= n; i++)
        f *= i;
    return f;
}

unsigned long Math::GetNextPrime(unsigned long prime) {
    if (prime == 2)
        return 3;
    else {
        unsigned int new_number = prime + 2;
        while (!IsPrime(new_number))
            new_number += 2;  // All primes except 2 are odd, so skip all
                              // even ones.
        return new_number; 
    }
}

unsigned long Math::IsPrime(unsigned long number) {
    for (int i = 2; i <= ceil(sqrt(number)); i++)
        if (number % i == 0)
            return false;
    return true;
}
