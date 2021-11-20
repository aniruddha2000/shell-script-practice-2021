#!/bin/bash

multiply ()
{
    echo "Multiplying $1 and $2 we get: $(($1 * $2))"
}

read -p "Enter first number: " num1
read -p "Enter second number: " num2
multiply $num1 $num2
