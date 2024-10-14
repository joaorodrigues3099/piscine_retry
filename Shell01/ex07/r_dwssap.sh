#!/bin/bash

cat /etc/passwd | cut -f1 -d":" | sed -n '2~2p' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed -z 's/\n/, /g' | sed 's/, $/./' | tr -d '\n'
