/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem9 : public Problem {

public:
    Problem9() : Problem(9) {}

    long Run() {
        unsigned int a, b, c;
        a = b = c = 1;
        while (true) {
            for (a = 1; a < c; a++)
                for (b = a + 1; b < c; b++)
                    if (pow(a, 2) + pow(b, 2) == pow(c, 2) && a + b + c  == 1000)
                        return a*b*c;
            c += 1;
        }

        return 0;
    }
};
