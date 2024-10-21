#Documentation
#Name : Harsh Patil
#Date : 12/7/2021
#Input :./largest.sh 1 2 3 4 5
#Output :The largest number is  5


#If the number of arguments entered in the inline command is less than 1 it throws an error
if [ $# -lt 1 ]
then 
    echo "Error its invalid arguments"
fi

#Declaring an array
array=($@)
#Assuming the first argument is largest and using it for comparision
largest=$1
len=${#array[@]}
var=0

#Checking the condition if variable value is less than the length of the array the while loop will run
while [ $var -le $len ]
do
    if [ ${array[$var]} -gt $largest ]
    then
	largest=${array[$var]}
    fi
    var=$((var+1))
done
#Printing the the largest number 
echo " The largest number is $largest"

