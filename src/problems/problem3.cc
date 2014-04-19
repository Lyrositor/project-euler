/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem3 : public Problem {

public:
    Problem3() : Problem(3) {}

    void Run() {
        const unsigned long number = 600851475143;
        unsigned long current = number;
        unsigned long prime = 2;

        while (current != 1) {
            if (current % prime == 0) {
                current = current/prime;
            } else {
                prime = GetNextPrime(prime);
            }
        }

        std::cout << "Answer: " << prime << std::endl;
    }

    unsigned long GetNextPrime(unsigned long prime) {
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

    unsigned long IsPrime(unsigned long number) {
        for (int i = 2; i <= ceil(sqrt(number)); i++)
            if (number % i == 0)
                return false;
        return true;
    }
};
