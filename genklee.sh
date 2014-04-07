#!/bin/bash

for steps in 1 2 3
do
  echo "Running Klee with $steps steps"
  mkdir -p klee_ktests/steps_$steps/
  klee -output-dir=klee_ktests/steps_$steps/klee-out/ microwave_llvm $steps &> klee_ktests/steps_$steps/klee.txt
done

