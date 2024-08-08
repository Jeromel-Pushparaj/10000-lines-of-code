echo "Enter the number: "
read number

sqrt_num=$(echo "sqrt($number)" | bc)
if [ $((sqrt_num * sqrt_num)) -eq $number ]; then
	echo "The $number is a prefect squre."
else
	echo "The $number is not a perfect squre."
fi

