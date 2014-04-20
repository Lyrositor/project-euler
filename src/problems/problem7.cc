/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem7 : public Problem {

public:
    Problem7() : Problem(7) {}

    void Run() {
        unsigned int prime = 2;
        for (unsigned int i = 0; i < 10000; i++)
            prime = Math::GetNextPrime(prime);

        std::cout << "Answer: " << prime << std::endl;
    }
};
