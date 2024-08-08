#!/bin/bash

calculate_area(){
	local side=$1
	local area=$((side * side))
	echo "The area of the squre with side length $side is $area"
}

side_length=5
calculate_area $side_length
