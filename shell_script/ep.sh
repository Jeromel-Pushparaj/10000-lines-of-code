#!/bin/bash
is_even_prime(){
	local num=$1
	if [ $num -eq 2 ]; then
		echo "$num is an even prime number"

	else 
		echo "$num is not an even prime number"
	fi
}

number=2
is_even_prime $number

