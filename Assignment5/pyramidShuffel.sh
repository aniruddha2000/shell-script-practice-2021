#!/bin/bash

for (( i=1; i<=5; i++ ))
do
	for (( j=1; j<=5 - i; j++ ))
	do
		echo -n "  "
	done
	number=$i
	k=1
	for (( j=1; j<=2*i - 1; j++ ))
	do
		if [ $j -lt $i ];
		then
			echo -n "$number "
			number=$((number + 1))

		elif [ $j -eq $i ];
		then
			echo -n "$number "
			number=$((number - 1))

		else
		echo -n "$number "
		number=$((number - 1))
		fi

	done

	echo
done
