#Documentation
#Name : Harsh Patil
#Date : 18/7/2021
#Input : ./freespace.sh
#Output:Filesystem /dev/loop0 have less than 10%  freespace 
#	Filesystem /dev/loop1 have less than 10%  freespace 
#	Filesystem /dev/loop2 have less than 10%  freespace 
#	Filesystem /dev/loop3 have less than 10%  freespace 
#	Filesystem /dev/loop4 have less than 10%  freespace 
#	Filesystem /dev/loop5 have less than 10%  freespace 
#	Filesystem /dev/loop6 have less than 10%  freespace 
#	Filesystem /dev/loop7 have less than 10%  freespace 
#	Filesystem /dev/loop8 have less than 10%  freespace 
# 	Filesystem /dev/loop9 have less than 10%  freespace  

#Extracting the filesystem name and storing it into the variable filesystem
filesystem=(echo `df -h|tr -s " "|cut -d " " -f1`)
#Extracting the spaceused  and storing it into the variable spaceused
spaceused=(echo `df -h|tr -s " "|cut -d " " -f5| cut -d % -f1`)
#Extracting the count  and storing it into the variable count
count=$(echo `df -h|tr -s " "|cut -d " " -f1|wc -l`)
#Implementation of for loop for checking every spaceused by each and every filesystem
for i in `seq 1 $count`
do
#Validating if the spaceused by the  filesystem is greater or equal to 90
    if [ ${spaceused[$i]} -ge 90 ]
    then
	#Printing the freespace message
       echo "Filesystem ${filesystem[$i]} have less than 10%  freespace "
    else
	#Printing the freespace message
	echo "Filesystem ${filesystem[$i]} have more than 10% freespace "
    fi
done



