#Documentation
#Name : Harsh Patil
#Date : 13/07/2021
#Input : 5
#Output : 5*5 Chessboard

echo -e "Enter the value"
read value

echo -e "Chessboard"



for row in `seq  $value`
do
    for col in `seq $value`
    do
	#Calculating the addition of rows and columns
	sum=$(($(($row+$col))%2))
	if [ $sum -gt 0 ]
	then
	#Printing a white box
	    echo -e -n "\e[47m" " "
	else
	#Printing a black box
	    echo -e -n "\e[40m" " "
	fi
    done
    echo -ne "\e[0m" " "
    echo
done
echo -ne "\e[0m" " "
