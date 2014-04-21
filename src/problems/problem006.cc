/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem6 : public Problem {

public:
    Problem6() : Problem(6) {}

    long long Run() {
        unsigned int sum1 = pow(50, 2);
        unsigned int sum2 = 50;
        for (int i = 0; i < 50; i++) {
            sum1 += pow(i, 2) + pow(100 - i, 2);
            sum2 += 100;
        }
        sum2 = pow(sum2, 2);

        return sum2 - sum1;
    }
};
