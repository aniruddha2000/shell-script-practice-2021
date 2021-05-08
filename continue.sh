#!/bin/sh

NUMS="1 2 3 4 5 6 7 8"

for NUM in $NUMS
do
    Q=`expr $NUM % 2`
    if [ $Q -eq 0 ]
    then
        echo "$NUM is even"
        continue
    fi
    echo "$NUM is odd"
done
