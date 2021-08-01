#!/bin/sh

cat /etc/passwd | awk -F ':' '{print $1}' | sed '1!n;d' | rev | sort -r |sed ''$FT_LINE1','$FT_LINE2'!d' | \
tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./g'









