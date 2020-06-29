#!/bin/bash
# Usage: ./ready.sh dir first last
# 	dir: directory name
# 	num: number of problems	


mkdir -p $1
cp Makefile $1/Makefile

chars=({a..z})
for ((i = 0; i < $2; i++)); do
	cp template.cpp $1/${chars[$i]}.cpp
done
