cmake_minimum_required(VERSION 3.0)

project(iac)

add_executable(iac main.cpp)

install(TARGETS iac RUNTIME DESTINATION bin)
