#!/bin/bash
fib()
{
# First Two Numbers of the Fibonacci Series
    a=0
    b=14

    echo "The Fibonacci series is : "

    for (( i=0; i<$1; i++ ))
    do
        echo -n "$a "
        fn=$((a + b))
        a=$b
        b=$fn
    done

}
read -p "Enter the number of terms: " n
fib n
