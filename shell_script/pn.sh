#!/bin/bash
echo "Enter a number: "
read num
if [ $num -gt 0 ]; then
	echo "The number is Positive."
elif [ $num -le 0 ]; then
	echo "The number is negative."
else
	echo "The number is zero."
fi

