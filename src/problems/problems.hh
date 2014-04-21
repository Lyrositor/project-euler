/**
 * Project Euler Problems
 */

#ifndef problems_h
#define problems_h

#include <vector>

#include "problem001.cc"
#include "problem002.cc"
#include "problem003.cc"
#include "problem004.cc"
#include "problem005.cc"
#include "problem006.cc"
#include "problem007.cc"
#include "problem008.cc"
#include "problem009.cc"
#include "problem010.cc"
#include "problem011.cc"
#include "problem012.cc"
#include "problem013.cc"
#include "problem014.cc"
#include "problem015.cc"
#include "problem016.cc"
#include "problem017.cc"
#include "problem018.cc"
#include "problem019.cc"
#include "problem020.cc"

class Problems {
public:
    Problems();

    bool IsProblemAvailable(unsigned int n);
    long long Run(unsigned int n);

private:
    std::vector<Problem*> fProblems;

    Problem* GetProblem(unsigned int n);
    void Register(Problem* problem);
};

#endif // problems_h
