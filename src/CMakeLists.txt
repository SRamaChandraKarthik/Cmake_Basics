cmake_minimum_required(VERSION 3.5)
project(karthikapp
VERSION 0.0.1
DESCRIPTION "KARTHIK THE GREAT"
LANGUAGES CXX)
add_executable(karthikappbinary main.cpp)
target_compile_features(karthikappbinary PRIVATE cxx_std_20)