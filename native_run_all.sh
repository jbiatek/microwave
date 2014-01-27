#!/bin/bash

for arg in "$@"; do
	export KTEST_FILE=$arg
	echo Running $KTEST_FILE
	./microwave_native
done
