#!/bin/bash
echo "Enter temperature in celsius: "
read c
f=$(echo "(9/5) * $c + 32" | bc)
echo "celsius $c is $f Fahrenheit"
