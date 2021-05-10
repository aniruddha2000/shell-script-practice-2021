#!/bin/bash

a=(b m i r p j l a t v)

echo "Original array: ${a[@]}"

sort_array() {
   arr=("$@")
   array=($(for i in "${arr[@]}"; do echo $i; done | sort))
   echo "Sorted array: ${array[@]}"
}

sort_array "${a[@]}"

a+=(h o c)
sort_array "${a[@]}"
