#!/bin/bash
calculate_circumference(){
	local radius=$1
	local pi=3.14159265358
	local circumference=$(echo "scale=2; 2 * $pi * $radius" | bc)
	echo "The Circumference of the circle with radius $radius is $circumference"
}

radius=5
calculate_circumference $radius

