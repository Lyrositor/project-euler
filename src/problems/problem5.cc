/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem5 : public Problem {

public:
    Problem5() : Problem(5) {}

    void Run() {
        const unsigned int start = 2520;
        unsigned int number = start;
        while (true) {
            for (unsigned int i = 20; i >= 10; i--) {
                if (i == 10)
                    goto answer;
                if (number % i != 0)
                    break;
            }
            number += 20;
        }

        answer:
        std::cout << "Answer: " << number << std::endl;
    }
};
