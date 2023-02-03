cmake_minimum_required(VERSION 3.10)

project(NodeExpression)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(NodeExpression main.cpp operator/operator.cpp constante/constante.cpp variable/variable.cpp node/node.cpp)