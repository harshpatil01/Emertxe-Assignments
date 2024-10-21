#Documentation
#Name : Harsh Patil
#Date :20/7/2021
#Input : ./sort.sh -a 2 4 1 5 9
#Output :
#Array in original order
#-a 2 4 1 5 9
#Array in sorted order is -a 1 2 4 5 9  

#Validation if number of arguments if less than 4
if [ $# -lt  4 ]
    then
	#Printing error message
	echo "Error : Invalid Input"
fi


#Storing command line agruments in the array
array=($@)
echo "Array in original order"
#Printing array with all the elements
echo ${array[@]}
count=${#array[@]}
#Storing ascending and descending operator 
operator=${array[0]}

#Case statements
case "$operator" in
   "-a") #Performing Bubble Sort(ascending order)
	for i in `seq 1 $count`
	do
   	for j in `seq 1 $count`
   	do
	    #Validating if the array element is greater or not
        if [ ${array[j]} -gt ${array[$((j+1))]} ]
        then
	#swap logic
	temp=${array[j]}
	array[j]=${array[$((j+1))]}
	array[$((j+1))]=$temp
       fi
       done
       done
       echo "Array in sorted order is ${array[@]}"
       ;;
       #Validating if the array element is less than or not
   "-d") #Perfforming Bubble Sort(descending order)
       for i in `seq 1 $count`
       do
	   for j in `seq 1 $count`
	   do
	       if [ ${array[j]} -lt ${array[$((j+1))]} ]
	       then
		   #swap logic
		   temp=${array[$((j+1))]}
		   array[$((j+1))]=${array[j]}
		   array[j]=$temp
	       fi
	   done
       done
	echo "Array in sorted order is ${array[@]}"
	;;
    *)
       echo "Error Message"
esac
