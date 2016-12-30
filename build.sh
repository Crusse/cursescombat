#!/bin/bash

mkdir -p ./dist
g++ -Wall -ggdb -g3 -std=c++11 -D'_XOPEN_SOURCE_EXTENDED=1' -o dist/cursescombat main.cpp game/*.cpp renderer/*.cpp -lncursesw

