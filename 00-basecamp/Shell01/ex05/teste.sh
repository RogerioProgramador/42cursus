#!/bin/sh
FILE=\"\\\?\$\*\'MaRViN\'\*\$\?\\\"
	 
echo -n "42" > $FILE
chmod 614 $FILE
touch -t 202010021221 $FILE
