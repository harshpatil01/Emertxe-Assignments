#Documentation
#Name : Harsh Patil
#Date : 18/7/2021
#Input :./output.sh
#Output :
#/home/harsh
#'=
#01_pattern.sh
#02_pattern.sh
#04_calculator.sh
#08_operator_dependent.sh
#10_string_length.sh
#11_chess_board.sh
#add.sh
#deleteline.sh
#Desktop
#Dir4
#Documents
#Downloads
#executable.sh
#fib.sh
#fifthline
#fifthline.sh
#file1.txt
#file2.txt
#freespace.sh
#hello.sh
#largest.sh
#lock.sh
#mod.sh~
#mounted.sh
#mount.sh
#Music
#operation_depend.sh
#output.sh
#Pictures
#printlines.sh
#printuser.sh
#Public
#randompassword.sh
#realadd.sh
#realno.sh
#recusion.sh
#reverse.sh
#sayhello.sh
#snap
#sort.sh
#systeminfo.sh
#Templates
#test.sh
#upper_lower.sh
#Videos




if [ $# -eq 0 ]
then
    echo $PWD
    echo * | tr " " "\n"
fi

if [ $# -gt 0 ]
then
    for i in $@
    do
	if [ $i -d ]
	then
	    echo *| tr " " "\n"
	else
	    echo "Error Its not a directory"
	fi

    done
    cd -
else
    exit
fi
