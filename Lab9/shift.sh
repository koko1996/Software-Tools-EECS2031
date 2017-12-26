#!/bin/sh
#################################
# EECS2031 –lab9				#
# Filename: shift.sh			#
# Author: NANAH JI, KOKO		# 
# Email: koko.nanahji@gmail.com #
# EECS_num: koko96				#
#################################
echo "arg1 = $1, arg2 = $2, arg3 = $3, ...., arg9 = $9"
echo "Total # of argument:  $#"
echo "They are: $@"   # list all the arguments, or use $*
echo      # print an empty line
shift

echo "arg1 = $1, arg2 = $2, arg3 = $3, ...., arg9 = $9"
echo "Total # of argument:  $#"
echo "They are: $*"   # list all the arguments, or use $@
echo

shift; shift    # or shift 2

echo "arg1 = $1, arg2 = $2, arg3 = $3, ...., arg9 = $9"
echo "Total # of argument:  $#"
echo They are: $@          # list all the arguments

