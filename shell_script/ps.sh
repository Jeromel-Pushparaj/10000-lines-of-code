#!/bin/bash

is_perfect_squre(){
	local num=$1
	local sqrt_num=$(echo "scale=0; sqrt($num)" | bc)
	
	if [ $((sqrt_num * sqrt_num)) -eq $num ]; then
		echo "$num is a perfect squre"
	else
		echo "$num is not a perfect square"
	fi
}

number=16
is_perfect_squre $number
