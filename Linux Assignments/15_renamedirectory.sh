#Documentation
#Name : Harsh Patil
#Date : 22/7/2021
#Input : bash renamedirectory.sh imp
#Output : 
# $pwd
# /home/harsh/imp


#checking if  argument count is not equal to 1
if [ $# -ne 1 ]
then
	echo "Error: no file/directory name is given"
	exit 1
fi

#First Argument  stored in the variable named path
path=$1
currentDirectory=`echo $PWD`

#currentDirectory=`basename $PWD`

#go to parent directory to check whether it is ok to rename or not
cd ../


#checking if the given file/directory path exists or not
if [ -e $path ]
then
	echo "Error: $path File/directory already exists in the parent directory"
	exit 1
else
	mv "$currentDirectory" "$path"
fi

