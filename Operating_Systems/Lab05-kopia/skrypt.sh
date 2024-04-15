#!/bin/bash



curl -s http://api.nbp.pl/api/exchangerates/rates/A/USD/$1/$2 | jq -r '.rates[] | "(.effectiveDate) (.mid)"' > kurs.dat



gnuplot -p <<EOF

set title "Kurs USD"

set datafile separator " "

set xdata time

set format x "%Y-%m-%d"

set timefmt '%Y-%m-%d'

set xrange ['$1':'$2']

plot "kurs.dat" using 1:2 with linespoint

EOF
