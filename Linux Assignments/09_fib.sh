#Documentation
#Name : Harsh Patil
#Date : 12/07/2021
#Input : 10
#Output :The fibonacci numbers is  0,1,1,2,3,5,8


#Prompt for the limit till where fibonacci number should be generated
echo "Enter the value of input n"
read n

#Initialisation of the number
num1=0
num2=1

echo "The fibonacci numbers till $n is"

#Entered Limit should be a positive number
if [ $n -gt 0 ]
then
#Loop will run until the value of num1 is less than limit
while [ $num1 -le $n ]
do
	#logic part of fibonacci 
    echo -n "$num1"
    echo
    sum=$(($num1+$num2))
    num1=$num2
    num2=$sum
done
else
	echo "Error please enter only positive numbers"
fi







