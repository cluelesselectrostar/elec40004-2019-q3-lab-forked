#!/bin/bash

set -e

g++ house.cpp -o house
g++ spiral.cpp -o spiral

./house > house.got.svg
./spiral > spiral.got.svg

diff house.got.svg house.ref.svg
diff spiral.got.svg spiral.ref.svg

echo "Success"
