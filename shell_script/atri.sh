#!/bin/bash
echo "Enter the base of the triangle: "
read base

echo "Enter the height of the triangle: "
read height

area=$(echo "0.5 * $base * $height" | bc)

echo "$area is the area of the triangle"
