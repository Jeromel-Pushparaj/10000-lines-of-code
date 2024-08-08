#!/bin/bash
echo "Enter the radius of the circle: "
read radius

pi=3.14
circumference=$(echo "2 * $pi * $radius" | bc)
echo "The circumference of the circle with radius $radius is $circumference"
