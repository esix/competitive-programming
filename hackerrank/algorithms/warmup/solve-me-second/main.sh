#!/bin/bash

read T

for (( t=1; t<=$T; t++ ))
do
  read line
  [[ $line =~ ([[:digit:]]+)[[:blank:]]([[:digit:]]+) ]]
  num=$(( ${BASH_REMATCH[1]} + ${BASH_REMATCH[2]} ))
  echo $num
done
