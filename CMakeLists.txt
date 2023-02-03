cmake_minimum_required(VERSION 3.10)
project(your_project_name)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the source files
set(SOURCES
    main.cpp
    node/node.cpp
    operator/operator.cpp
    constante/constante.cpp
    variable/variable.cpp
)

# Add the header files
set(HEADERS
    node/node.h
    operator/operator.h
    constante/constante.h
    variable/variable.h
)

# Create the executable
add_executable(your_executable_name ${SOURCES} ${HEADERS})