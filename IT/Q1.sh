#!/bin/bash

echo "Enter the value of 'n': "
read n
for ((i = 1; i <= n; i++))
do
    for ((j = 1; j <= i; j++))
    do
        echo -n "$j "
    done
    echo 
done