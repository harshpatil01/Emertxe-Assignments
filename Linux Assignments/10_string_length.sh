#Documentation
#Name : Harsh Patil
#Date : 11/07/1998
#Input : Hi
#Output : Length of the string=2




if [ $# -gt 0 ]
then
    
    array=($@)
    echo "String length of the given values"
    len=${#array[i]}
    for i in $len
    do
	echo "Length of the string=$len"

    done
else
    echo "Enter a proper argument to perform an operation"
fi



