#Documentation
#Name : Harsh Patil
#Date : 12/7/2021
#Input :
#Output :



#Validation part to check if the argument file passed exists or not
if [ -f $1 ][km
    then
	#Acessing file passed through command Line and tr command to remove the blank lines and then redirecting it two file1.txt file
	cat $1 | tr -d [:blank:]>file1.txt
	#sed command used to delete blank spaces (^$ means blank spaces) from file1.txt
	sed -i '/^$/d' file1.txt
	#copying file1.txt contents to the file passed via command line argument
	cp file1.txt $1
	#Printing after deleting spaces and blank lines
	echo "Empty Lines are deleted"
    else
	#Printing error 
	echo " Invalid Arguments"
fi
