#Documentation
#Name : Harsh Patil
#Date : 18/7/2021
#Input : ./usersearch.sh harsh
#Output : User harsh is present



#Now extracting user into a variable known as user
user=(`cat /etc/passwd| cut -d ":" -f1`)
#Setting value of p=0
p=0

#Declaring a function
function display()
{
	#$1 is the username and $2 is value of p
    if [ $2 -eq 0 ]
    then
	echo "User $1 is not present"
    else
	echo "User $1 is present"
    fi

}

#Each user is compared with the entered username with help of for and if loops
for i in `seq 0 ${#user[@]}`
do
if [ ${user[$i]} == $1 ]
then
	#Setting value of p=1
    p=1
	#Calling the function and passing the arguments to the function as 1 and 2 (1 is the username and 2 is value of p)
    display $1 $p
fi
done

#Checking if the value of p is equal to 0 with the help of if loop
if [ $p -eq 0 ]
then
    #Calling the function and passing the arguments to the function as 1 and 2(1 is the username and 2 is value of p)
    display $1 $p
fi


