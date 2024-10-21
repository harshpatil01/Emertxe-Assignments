#Documentation
#Name : Harsh Patil
#Date : 20/7/2021
#Input : ./operatordependent 123+
#Output : 6


#Storing the cmd line arguments in array
array=($@)

#Length of the array of the entered command line arguments
len=${#array}

#Index of the last element of the array
b=$(($len - 1))

#Extracting the operator from the entered cmd arguments into variable named operator
operator=${array:$b:1}

#Storing the first variable into a variable name temp
temp=${array:0:1}

#for loop for operator dependent calculation
for ((i=0;i<$b;i++))
do

#Extracting individual elements from entered cmd line arguments
x=${array:$i:1}


#Case Statements
case $operator in
    # + operator calculation using basic calculator
    "+")total=`echo $temp + $x | bc `
    	#Storing the initial total of two elements of array into the temp variable
	temp=$total
	;;
	# - operator calculation using basic calculator
    "-")total=`echo $temp - $x | bc `
        temp=$total  
	;;
	# * operator calculation using basic calculator
    "x")total=`echo $temp \* $x | bc `
        temp=$total 
       	;;
	# / operator calculation using basic calculator
    "/")total=`echo $temp / $x | bc `
        temp=$total 
	;;
	# % operator calculation using basic calculator
    "%")total=`echo $temp % $x | bc `
        temp=$total
	;;
     *)echo "Invalid Operator"
	 ;;

     esac
done
#Printing the answer
echo "Ans : $total"

