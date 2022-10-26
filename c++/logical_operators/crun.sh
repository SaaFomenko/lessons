#!/bin/bash
# Compile and run c++ program

gcc $1.cpp -lstdc++ -o $1 && ./$1
