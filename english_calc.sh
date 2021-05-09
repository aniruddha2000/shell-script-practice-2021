#!/bin/bash

ENGLISH_CALC() {
    a=$1
    b=$3
    sign=$2

    if [ "$sign" == "plus" ]; then
        echo "$a + $b = $(($a+$b))"
    elif [ "$sign" == "minus" ]; then
        echo "$a - $b = $(($a-$b))"
    elif [ "$sign" == "times" ]; then
        echo "$a * $b = $(($a*$b))"
    fi
}

ENGLISH_CALC 3 plus 5
ENGLISH_CALC 5 minus 1
ENGLISH_CALC 4 times 6
