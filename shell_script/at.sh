#!/bin/bash
echo "Enter the base of the triangle: "
read base
echo "Enter the height of teh triangle: "
read height
area=$(echo "scale=2; 0.5 * $base * $height" | bc)
echo "The area of te triangle is $area"

