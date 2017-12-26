#!/bin/sh
#################################
# EECS2031 –lab9				#
# Filename: lab9d.sh			#
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
			echo "`egrep -w $2 $1`"
			else 
				echo "Error! "$1" is an empty file"
			fi
		else 
		echo "Error! "$1" is not an existing file in the current directory"
		fi
	fi 