#!/bin/bash

start_line="$1"
num_lines="$2"
filename="$3"

end_line=$((start_line + num_lines - 1))

tail -n +$start_line "$filename" | head -n $num_lines