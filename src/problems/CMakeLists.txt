# Project Euler Problems

set(PROBLEMS_HEADERS
    problem.hh
    problems.hh

    problem1.hh
)

set(PROBLEMS_SOURCES
    problems.cc

    problem1.cc
)

add_library(problems STATIC ${PROBLEMS_SOURCES} ${PROBLEMS_HEADERS})
