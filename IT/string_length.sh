#!/bin/bash

for string in "$@"; do
  length=${#string}
  echo "Length of string ($string) -$length"
done