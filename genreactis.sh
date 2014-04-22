#!/bin/bash

for steps in {1..78}
do
  echo "Running Reactis tests with $steps steps"
  mkdir -p coverage/reactis/steps_$steps/
  ./native_run_all.sh $steps reactis_ktests/*.ktest &> coverage/reactis/steps_$steps/native.txt
  gcovr -k > coverage/reactis/steps_$steps/gcovr.txt
  mkdir coverage/reactis/steps_$steps/gcov/
  mv *.gcov coverage/reactis/steps_$steps/gcov/
done


