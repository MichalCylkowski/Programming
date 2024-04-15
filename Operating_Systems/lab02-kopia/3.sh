#!/bin/bash

for plik in *.cpp; do

  nr_indeksu="${plik%_z1.cpp}"

  echo "Nr indeksu: $nr_indeksu"
  echo "Zadanie 1"

  kod=$(cat "$plik")

  echo -n "Podaj liczbę < 25: "
  read liczba

  silnia=1
  for i in $(seq 1 "$liczba"); do
    silnia=$((silnia * i))
  done

  
  echo "Silnia $liczba: $silnia "

  echo -n "Ocena: "
  read ocena

  echo "$nr_indeksu $ocena" >> oceny.txt

  echo -n "Wyświetlić kod (t/n)? "
  read opcja

  if [[ "$opcja" == "t" ]]; then
    cat "$plik"
  fi
done