# Project Euler Problems

set(PROBLEMS_HEADERS
    common.hh
    problem.hh
    problems.hh
)

set(PROBLEMS_SOURCES
    common.cc
    problems.cc

    problem1.cc
    problem2.cc
    problem3.cc
    problem4.cc
    problem5.cc
    problem6.cc
    problem7.cc
    problem8.cc
    problem9.cc
)

add_library(problems STATIC ${PROBLEMS_SOURCES} ${PROBLEMS_HEADERS})
