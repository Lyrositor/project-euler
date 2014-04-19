/**
 * Project Euler Problems
 */

#ifndef problems_h
#define problems_h

#include <vector>

#include "problem1.cc"
#include "problem2.cc"
#include "problem3.cc"

class Problems {
public:
    Problems();

    bool IsProblemAvailable(unsigned int n);
    void Run(unsigned int n);

private:
    std::vector<Problem*> fProblems;

    Problem* GetProblem(unsigned int n);
    void Register(Problem* problem);
};

#endif // problems_h
