/**
 * Project Euler Problems
 */

#ifndef problem1_h
#define problem1_h

#include "problem.hh"

class Problem1 : public Problem {
public:
    Problem1() : Problem(1) {}
    void Run();

private:
    unsigned int SumOfMultiples(unsigned int number, unsigned int max, bool include);
};

#endif // problem1_h
