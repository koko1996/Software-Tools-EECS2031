#!/bin/sh
#################################
# EECS2031 –lab9				#
# Filename: lab9a.sh			#
# Author: NANAH JI, KOKO		# 
# Email: koko.nanahji@gmail.com #
# EECS_num: koko96				#
#################################
echo -n "Enter a number or 'quit':"
read  number
while (( $number != "quit" ))
	do
	if (( $number < 0 ))
	then
		echo "$number is a negative number"
	else 
		echo "$number is a positive number"
	fi
echo -n "Enter a number or 'quit':"
read  number
done
echo  "Bye bye"
