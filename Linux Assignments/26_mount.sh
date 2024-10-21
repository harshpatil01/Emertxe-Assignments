#Documentation
#Name : Harsh Patil
#Date : 17/7/2021
#Input : bash mount.sh /dev/loop9
#Output : Filesystem /dev/loop9 is mounted on / and it is having 33M  used space with 33M KB free


#Validating if the number of command line arguments is equal to 1
if [ $# -eq 1 ]
then
    #extracting filesystem names into a variable
    filesystem=(echo `df -h| cut -d " " -f1`)
    #extracting filesize names into a variable
    filesize=(echo `df -h|tr -s " "| cut -d " " -f2`)
    #extracting fileused names into a variable
    fileused=(echo `df -h| tr -s " "| cut -d " " -f3`)
    num=${#filesystem[@]}
    c=0
    for i in `seq $num`
    do
	#Validating if the filesystem name is matching the passed command line argument
    if [ "${filesystem[$i]}" == $1 ]
    then
	echo "Filesystem $1 is mounted on / and it is having ${fileused[i]}  used space with ${filesize[$i]} KB free"
    c=1
    fi
done
   
 else
     echo " Error : Please pass the name of the file system"
 fi

 #Validating if the c variable is equal to 0 
 if [ $c -eq 0 ]
 then
     #Printing Message
     echo "$1 is not mounted"
 fi

