#Documentation
#Name : Harsh Patil
#Date : 16/7/2021
#Input : ./fifthline.sh file1.txt
#Output : line 5

#Validating if the file exists or not
if [ ! -f $1 ]
then
    echo " Error No such file exists "
fi

#Validating if the number of arguments are equal to one
if [ $# -eq 1 ]
then
    #Counting the number of lines in the file
    count=`wc -l $1 | cut -d" " -f1`
  #Validating if the count is greater than 5
    if [ $count -ge 5 ]
    then
	#Printing the output as the line 5 
	cat|head -5 $1| tail -1
    else
    	echo "Error Message"
 fi
fi    
  

