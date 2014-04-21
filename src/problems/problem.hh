/**
 * Project Euler Problems
 */

#ifndef problem_h
#define problem_h

#include <cmath>
#include <iostream>
#include <string>

#include "common.hh"

class Problem {
public:
    unsigned int GetNumber() { return fNumber; }
    virtual long long Run() = 0;

protected:
    Problem(unsigned int n) : fNumber(n) {}

private:
    const unsigned int fNumber;
};

#endif // problem_h
