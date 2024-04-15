#!/bin/bash

if [ $# -ne 1 ]; then
  echo "Należy podać jeden argument."
  exit 1
fi

if [ ! -f "$1" ]; then
  echo "Podany argument nie jest plikiem."
  exit 1
else
  echo "Podany argument jest plikiem."
fi

while read -r line; do
  if [[ $line =~ s[0-9]{5} ]]; then
    echo " $line"
  fi
done < "$1"
