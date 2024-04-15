#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Podaj liczbe od 1 do 20."
    exit 1
fi

if ! [[ $1 =~ ^[0-9]+$ ]]; then
    echo "Podana liczba nie jest calkowita."
    exit 1
fi

if (( $1 < 1 || $1 > 20 )); then
    echo "Podana liczba musi byc w zakresie od 1 do 20."
    exit 1
fi

echo "$(head -n $1 lista.txt | tail -n 1)"

