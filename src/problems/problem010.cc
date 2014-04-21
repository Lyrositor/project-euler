/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem10 : public Problem {

public:
    Problem10() : Problem(10) {}

    long long Run() {
        const unsigned long max = 2 * pow(10, 6);
        unsigned long prime = 2;
        unsigned long sum = 0;
        while (prime < max) {
            sum += prime;
            prime = Math::GetNextPrime(prime);
        }
        std::cout << prime << std::endl;
        return sum;
    }
};
