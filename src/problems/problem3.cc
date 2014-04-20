/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem3 : public Problem {

public:
    Problem3() : Problem(3) {}

    long Run() {
        const unsigned long number = 600851475143;
        unsigned long current = number;
        unsigned long prime = 2;

        while (current != 1) {
            if (current % prime == 0) {
                current = current/prime;
            } else {
                prime = Math::GetNextPrime(prime);
            }
        }

        return prime;
    }
};
