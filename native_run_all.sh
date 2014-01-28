#!/bin/bash
depth=$1
shift
for arg in "$@"; do
	export KTEST_FILE=$arg
	echo Running $KTEST_FILE
	./microwave_native $depth
done
