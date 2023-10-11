#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

sed -i '/^$/d' "$1"

echo "Empty lines have been deleted from $1."
