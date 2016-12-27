#!/bin/bash

mkdir -p ./dist
g++ -Wall -std=c++11 -o dist/cursescombat main.cpp -lncursesw

