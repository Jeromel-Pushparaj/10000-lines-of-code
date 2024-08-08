#!/bin/bash
factorial(){
	local n=$1
	if [ $n -le 1 ]; then
		echo 1
	else
		local temp=$((n - 1))
		local result=$(factorial $temp)
		echo $((n * result))
	fi
}

echo "Enter the number: "
read number
result=$(factorial $number)
echo "The factorial of $number is $result"
