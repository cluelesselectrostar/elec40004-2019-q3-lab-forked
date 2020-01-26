#!/bin/bash

set -e

g++ vector2d.hpp
g++ test_vector2d_iostest.cpp -o test_vector2diostest

echo "(4,4) \n (-2.00000001, 0) \n (3.5,6.25)" | ./test_vector2diostest > test_vector2d_actual.txt
dwdiff test_vector2d_actual.txt test_vector2d_io_in.txt 

echo "Success"
