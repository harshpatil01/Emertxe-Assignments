#Documentation
#Name : Harsh Patil
#Date : 21/7/2021
#Input : ./delswp.sh
#Output :

#The present directory is /home/harsh
#The number of swp files is : 1 
#The swp files are
#./Dir1/.file_upper-lower.sh.swp
#The swp files are successfully deleted
#No of swp files now is 0

#Switching back to the  home directory
cd ~
#Printing the present directory
echo "The present directory is $PWD "
#Searching and storing the .swp files into an array
array=(`find . -name ".*swp"`)

#Number of swp files 
echo "The number of swp files is : ${#array[@]} "
#Displaying the swp files
echo "The swp files found are"
echo ${array[@]}

#Validating if the number of swp file is equal to 1 and then entering if loop
if [ ${#array[@]} -ne 1 ]
then
    echo "There are no swp files that are found in the system"
else
    for i in ${array[@]}
    do
	rm $i
	echo "The swp files are successfully deleted"
	echo "No of swp files now is ${#array[@]} "
    done
fi


