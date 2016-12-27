#!/bin/bash

CPP_FILES="main.cpp
CursesRenderer.cpp"

mkdir -p ./dist
g++ -Wall -std=c++11 -D'_XOPEN_SOURCE_EXTENDED=1' -o dist/cursescombat $CPP_FILES -lncursesw
