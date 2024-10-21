#Documentation
#Name : Harsh Patil
#Date : 13/07/2021
#Input : num1=1 and num2=9
#Output : The sum is 10

#Prompt for accepting two numbers
echo "Enter the first number"
read num1

echo "Enter the second number"
read num2

#Logic for checking whether the entered numbers are real or not
logic='^[+-]?[0-9]?+[.]?[0-9]+$'


#If the number1 is approximately equal to the logic
if [[ $num1 =~ $logic ]]
then
#If the number2 is approximately equal to the logic
  if [[ $num2 =~ $logic ]]
	then
	#Calculation of sum through the use of piping and basic calculator
   	 sum=`echo "$num1 + $num2"|bc`
   	 echo "The sum of the two numbers is $sum"
	else
	#Printing statements
	    echo "Num 2 is not a real number"
	 fi
     else
	 #Printing statements
	 echo "Num1 is not a real number"
  fi

