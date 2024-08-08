#!/bin/bash

# Define source and destination directories
src_dir="/home/jeromel"
dest_dir="/mnt/d/playground/10000-lines-of-code/shell_script"

# Create the destination directory if it doesn't exist
mkdir -p "$dest_dir"

# Loop 100 times
for (( i=1; i<=100; i++ ))
do
  echo "Iteration $i"
  # Find and move files modified in the last 24 hours
  find "$src_dir" -type f -mtime -1 -exec mv {} "$dest_dir/" \;
  # Add a sleep command if you want to pause between iterations (optional)
  # sleep 1
done

echo "Completed 100 iterations."

