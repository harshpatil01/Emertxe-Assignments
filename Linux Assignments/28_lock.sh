#Documentation
#Name : Harsh Patil
#Date : 18/7/2021
#Input : ./lock.sh Dir4/
#Output : Before running the script
#         ls -l Dir4/
#         total 0
#         -rw-rw-r-- 1 harsh harsh 0 Jun 28 13:16 test.txt
# 	  After running the script
#         ./lock.sh Dir4/
#         total 0
#         -rw------- 1 harsh harsh 0 Jun 28 13:16 test.txt

 
#Validating if the number of command line arguments is not equal to one
if [ $# -ne 1 ]
then
	echo "Error invalid input . Enter an argument"
    exit
fi

#Validating if the directory is present or not
if [ ! -d $1 ]
then
    echo " $1 is not a directory "
fi

#Removing the permissions of the directory 
chmod -R go-x,go-r,go-w $1
