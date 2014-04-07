#!/bin/bash

for steps in {1..78}
do
  echo "Running Reactis tests with $steps steps"
  mkdir -p coverage/reactis/steps_$steps/
  ./native_run_all.sh $steps reactis_ktests/*.ktest &> coverage/reactis/steps_$steps/native.txt
  gcovr -k > coverage/reactis/steps_$steps/gcovr.txt
  mkdir coverage/reactis/steps_$steps/gcov/
  mv *.gcov coverage/reactis/steps_$steps/gcov/
  make clean_gcov
done

exit

for steps in 1 2 3
do
  echo "Running Klee with $steps steps"
  mkdir -p coverage/klee/steps_$steps/
  ./native_run_all.sh $steps klee_ktests/steps_$steps/klee-out/*.ktest &> coverage/klee/steps_$steps/native.txt
  gcovr -k > coverage/klee/steps_$steps/gcovr.txt
  mkdir coverage/klee/steps_$steps/gcov/
  mv *.gcov coverage/klee/steps_$steps/gcov/
  make clean_gcov
done

