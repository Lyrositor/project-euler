/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem2 : public Problem {

public:
    Problem2() : Problem(2) {}
    void Run() {
        unsigned int un, un1, un1_old;
        un = un1 = un1_old = 1;
        unsigned int max = 4 * pow(10, 6);
        unsigned int sum = 0;

        while (un < max) {
            un1_old = un1;
            un1 += un;
            if (un % 2 == 0)
                sum += un;
            un = un1_old;
        }
        
        std::cout << "Answer: " << sum << std::endl;
    }
};
