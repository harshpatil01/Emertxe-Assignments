#Documentation
#Name : Harsh Patil
#Date :15/7/2021
#Input : #./printlines.sh 5 3 file1.txt
#Output : 
#line 5
#line 6
#line 7



#Validating Arguments
if [ $# -eq 3 ]
then
    #Total number of count
	headcount=$(($1+$2))
	#Total number of lines present in the file
	countoffile=`wc -l $3|cut -d " " -f1`
	#Validating if the total number of lines in file is greater than headcount
	if [ $countoffile -gt $headcount ]
	then
	    #Using head and tail and commands to print the next three lines from the starting number
		cat | head -n $(($headcount-1)) $3 | tail -n $2
        else
	    #Error Message
		echo "Error : The arguments passed are not valid numbers"
    fi

else
    echo " Enter more than three arguments"
fi


