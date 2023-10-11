#!/bin/bash

if [ $# -eq 0 ]; then
    echo "No arguments provided. Please provide some integers."
    exit 1
fi

largest=$1

for arg in "$@"; 
do
    if [ "$arg" -gt "$largest" ]; then
        largest="$arg"
    fi
done

echo "The largest integer value is: $largest"