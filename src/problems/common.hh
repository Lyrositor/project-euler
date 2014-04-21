/**
 * Project Euler Problems
 */

#ifndef common_h
#define common_h

#include <algorithm>
#include <cmath>

class Math {
public:
    static unsigned long long Factorial(unsigned long long n);
    static unsigned long GetNextPrime(unsigned long prime);
    static unsigned long IsPrime(unsigned long number);
};

#endif // common_h
