#Documentation
#Name : Harsh Patil
#Date : 17/7/2021
#Input : ./recusion.sh 1 2 3 t
#Output :1
#	 2
#	 3
#	 t


#Declaring a function for performing the specified operation
function display()
{
    #Stroing command line arguments into an array
    array=("$@")
    #Validating if the command line arguments are greater than zero
    if [ ${#array[@]} -gt 0 ]
    then
	#The first element is being printed
	echo $1
	#Each elemet of array is being separated one by one
	array=(`echo ${array[@]:1:${#array[@]}-1}`)
	#Calling the function and passing the array elements as arguments  in the function itself
	display ${array[@]}

    fi
}    
if [ $# -gt 0 ]
then
    #Calling the function when it enters the loop
    display $@
else
    #Exiting the program
    exit 
fi



















































