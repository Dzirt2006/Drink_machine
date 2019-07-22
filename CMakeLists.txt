cmake_minimum_required(VERSION 3.14)
project(Drink_Machine_Simulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Drink_Machine_Simulator main.cpp MachineManager.cpp MachineManager.h)