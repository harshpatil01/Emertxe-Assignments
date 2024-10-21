#Documentation
#Name : Harsh Patil
#Date :	08/07/2021
#Input : 4
#Output : 1
#         2 3    
#		  4 5 6
#		  7 8 9 10	

echo "Enter the value of input"  //Prompting the user to enter the input
read n

if [ $n -gt 2 -a $n -lt 32 ]       //if value of n greater than 2 and less then 32
then
    count=1
    echo "Pattern shown below"
    for ((row=1;row<=$n;row++ ))    //for loop for row
    do
	for (( col=1;col<=row;col++ ))  //for loop for column
	do
	    echo -n "$count"            //Printing the required pattern
	    count=$((count+1))			//Adding count=count+1 
	 done
     echo                           
 done
 else
	echo "Error : Number out of range, Please enter 2 < number < 32" //Printing the error message
fi
