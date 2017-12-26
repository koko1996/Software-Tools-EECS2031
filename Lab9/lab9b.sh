#!/bin/sh
#################################
# EECS2031 –lab9				#
# Filename: lab9b.sh			#
# Author: NANAH JI, KOKO		# 
# Email: koko.nanahji@gmail.com #
# EECS_num: koko96				#
#################################
echo -n "Enter op1 opr op2: "
read  number1 opr number2 
while (( $number1 != "quit" ))
	do
	if [ "$opr" == "+" ]
	then
		echo "Result: $number1 $opr $number2 = `expr $number1 + $number2`"
	elif [ "$opr" == "-" ]
	then
		echo "Result: $number1 $opr $number2 = `expr $number1 - $number2`"
	elif [ "$opr" == "x" ]
	then
		echo "Result: $number1 $opr $number2 = $((number1 * number2))"
	elif [ "$opr" == "/" ]
	then
		echo "Result: $number1 $opr $number2 = $((number1 / number2))"
	else
		echo "Invalid operator -- accept + - x / only"
	fi
echo -n "Enter op1 opr op2: "
read  number1 opr number2 
done
echo  "Bye bye"
