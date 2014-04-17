# Project Euler Problems

add_subdirectory(problems)

set(EULER_EXECUTABLE project-euler)
set(EULER_HEADERS
)
set(EULER_SOURCES
    main.cc
)
set(EULER_LIBRARIES
    problems
)

add_executable(
    ${EULER_EXECUTABLE}
    ${EULER_HEADERS}
    ${EULER_SOURCES}
)
target_link_libraries(${EULER_EXECUTABLE} ${EULER_LIBRARIES})

install(
    TARGETS ${EULER_EXECUTABLE}
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}
    CONFIGURATIONS All
)
