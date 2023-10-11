#!/bin/bash

numbers=()

for arg in "$@"; do
  numbers+=("$arg")
done

sorted_asc=($(printf "%s\n" "${numbers[@]}" | sort -n))

sorted_desc=($(printf "%s\n" "${numbers[@]}" | sort -nr))

echo "Ascending order: ${sorted_asc[@]}"
echo "Descending order: ${sorted_desc[@]}"