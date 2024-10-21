#Documentation
#Name : Harsh Patil
#Date : 11/07/2021
#Input : ./04_arithmetic_calc.sh 25+10
#Output : The result is 25+10=35


#Printing the statements
echo "Arithmetic Calculator"
echo "Please pass the arguments throught the Command Line"


#Validation of the number of arguments to check there are more than three
if [ "$#" -eq 3 ]                           
then
    #First argument is passed to a variable operator1
    operator1=$1
    #Second argument is passed to a variable operator2
    operator2=$3
    #Three arguemnt is passed to an variable operant
    operand=$2


#case statements
case "$operand" in
    "+") result=`echo "$operator1+$operator2" |bc`;;
    "-") result=`echo "$operator1-$operator2" |bc`;;
    "x") result=`echo "$operator1*$operator2" |bc`;;
    "/") result=`echo "$operator1/$operator2" |bc`;;
    "*") echo"Invalid operand";;
esac 

#Printing the results of the Calculator
echo "The result is $operator1 $operand $operator2= $result"
else
	echo "Error Please pass three arguments"
fi



    


