#Documentation
#Name : Harsh Patil
#Date : 12/07/2021
#Input : 1424 
#Output : 4241

#Printing Statements
echo "Enter the number to be reserved" 
read input

#Initialisation
mod=0
rev=0

#Checking if the input is greater than 0
while [ $input -gt 0 ]
do
	#Implementing Logic of the program
    mod=$(( $input%10 ))
    rev=$(( $rev*10 + $mod ))
    input=$(( $input/10))
done

#Printing the reversed number
echo "The reverse of the entered number is $rev"
