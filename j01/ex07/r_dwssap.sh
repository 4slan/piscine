#!/bin/sh
cat /etc/passwd | sed '1,10d' | sed -n 'n;p' | grep -Eo '^\w+' | rev | sort -r | sed -n ''$FT_LINE1","$FT_LINE2"p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./' | tr -d '\n'
