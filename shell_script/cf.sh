#!/bin/bash
echo "Enter temperature in Celsius: "
read celsius
fahrenheit=$(echo "scale=2; (9/5) * $celsius + 32" | bc)
echo "$celsius Celsius is $fahrenheit Fahrenheit"

