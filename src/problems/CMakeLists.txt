# Project Euler Problems

set(PROBLEMS_HEADERS
    problem.hh
    problems.hh
)

set(PROBLEMS_SOURCES
    problems.cc

    problem1.cc
    problem2.cc
    problem3.cc
    problem4.cc
    problem5.cc
)

add_library(problems STATIC ${PROBLEMS_SOURCES} ${PROBLEMS_HEADERS})
