#!/bin/bash
echo "Enter a number: "
read num
sum=0
tem=$num
while [ $tem -gt 0 ]; do
	digit=$((tem % 10))
	sum=$((sum + digit**3))
	tem=$((tem / 10))
done

if [ $sum -eq $num ]; then
	echo "$num is an Armstrong number"
else 
	echo "$num is not an Armstron number."
fi

