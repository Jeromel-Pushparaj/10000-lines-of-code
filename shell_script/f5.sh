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

for i in 1 2 3 4 5
do
	result=$(factorial $i)
	echo "The factorial of $i is $result"
done
