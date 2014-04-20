/**
 * Project Euler Problems
 */

#include "problems.hh"

Problems::Problems() {
    // Register all the problems that are available.
    Register(new Problem1);
    Register(new Problem2);
    Register(new Problem3);
    Register(new Problem4);
    Register(new Problem5);
    Register(new Problem6);
    Register(new Problem7);
    Register(new Problem8);
    Register(new Problem9);
    Register(new Problem10);
    Register(new Problem11);
    Register(new Problem12);
    Register(new Problem13);
    Register(new Problem14);
}

void Problems::Register(Problem* problem)
{
    fProblems.push_back(problem);
}

bool Problems::IsProblemAvailable(unsigned int n) {
    if (GetProblem(n))
        return true;
    return false;
}

Problem* Problems::GetProblem(unsigned int n) {
    for (std::vector<Problem*>::iterator i = fProblems.begin(); i != fProblems.end(); ++i)
        if ((*i)->GetNumber() == n)
            return (*i);
    return nullptr;
}

long Problems::Run(unsigned int n) {
    Problem* p = GetProblem(n);
    if (GetProblem(n))
        return p->Run();
    return 0;
}
