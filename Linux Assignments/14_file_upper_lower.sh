#Documentation
#Name : Harsh Patil
#Date : 22/7/2021
#Input :  ./file_upper_lower.sh /home/harsh/Dir1
#Output : DIRECTORY1  DIRECTORY4           file2.txt
# 	  DIRECTORY2  file_upper-lower.sh  file3.txt
#	  DIRECTORY3  file1.txt		   file5.txt

#checking for number of arguments
if [ $# -ne 1 ]
then
	echo "Error: No file/directory name is given"
	exit 1
fi

path=$1

#checking if the path exists or not
if [ ! -e $path ]
then
	echo "Error: No such file/directory exists"
	exit 1
fi



#Checking if the given path is directory or not
if [ -d $path ]
then
	#Using tr command translating it into capital
	newName=`echo $path | tr [:lower:] [:upper:]`

    #check if newName file/directory path exists
	if [ -e $newName ]
	then
		echo "Error: $newName file/directory  exists "
		exit 1
	else
		mv "$path" "$newName"		
	fi
#Checking if the given path is file or not
elif [ -f $path ]
then
	#Using tr command translating it into normal letters
	newName=`echo $path | tr [:upper:] [:lower:]`

	#check if newName file/directory path exists 
	if [ -e $newName ]
	then
		echo "Error: $newName file/directory exists "
		exit 1
	else
		mv "$path" "$newName"		
	fi
fi
