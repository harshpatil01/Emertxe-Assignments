#Documentation
#Name : Harsh Patil
#Date :08/07/2021
#Input :  Input given is 4
#Output :   1
#	    	1 2
#           1 2 3
#           1 2 3 4


echo " Enter the value of input" //Prompting the user to enter the input
read n						

if [ $n -gt 2 -a $n -lt 32 ]					//if value of n greater than 0
then
    echo "Pattern is shown as below"  
    for (( row=1;row<=n;row++ ))    //for loop for row
    do
	for (( col=1;col<=row;col++ ))  //for loop for column
	do
	   
	    echo -n "$col"				//Printing the required pattern
	done
	echo
    done
	else
		echo "Error : Number out of range, Please enter 2 < number < 32 "
fi

