#!/bin/sh

#define a function to find factorial of a number
factorial()
{
    local num=$1
    local fact=1

    while [ $num -gt 1 ]
    do
        fact=$((fact * num))
        num=$((num - 1))
    done
    echo $fact
}

read -p "Enter a Number: " num
factorial $num
