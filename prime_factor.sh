#!/bin/bash

#to find factors of a number
num=$1
for (( i=2; i <= $(($1)); i++ ))
do
    while [ $((num%$i)) == 0 ]
    do
        echo $i
        num=$((num/$i))
    done
done
