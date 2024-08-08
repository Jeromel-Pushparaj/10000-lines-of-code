#!/bin/bash
echo "Enter the number: "
read number

if [ $number -eq 2 ]; then
	echo "The given Number $number is even prime."
else
	echo "The given Number $number is not even prime."
fi

