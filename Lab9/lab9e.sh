#!/bin/sh
#################################
# EECS2031 –lab9				#
# Filename: lab9e.sh			#
# Author: NANAH JI, KOKO		# 
# Email: koko.nanahji@gmail.com #
# EECS_num: koko96				#
#################################
	if (( $# < 2 ))
	then
		echo "Error! usage:  $0  filename pattern"
	else
		if [  -f $1 ]
		then
			if [ -s $1 ]	# size greater than zero
			then 
				if ((  `egrep -w $2 $1 | wc -l` > 0 ))
				then
				echo "Pattern \"$2\" found in file \"$1\" "
				else 
				echo "Pattern \"$2\" not found in file \"$1\" "
				fi
			else 
				echo "Error! "$1" is an empty file"
			fi
		else 
		echo "Error! "$1" is not an existing file in the current directory"
		fi
	fi 