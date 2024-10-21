#Documentation
#Name : Harsh Patil
#Date : 16/7/2021
#Input : /upper_lower.sh file2.txt
#Output :Please Enter an option : 1.Lower to Upper 2.Upper to Lower
#1
#HELLO
#Please Enter an option : 1.Lower to Upper 2.Upper to Lower
#2
#hello


#Validating if the number of command line arguments is equal to 1
if [ $# -eq 1 ]
then
    echo "Please Enter an option : 1.Lower to Upper 2.Upper to Lower"
    read option
    #Decalaring case and choosing the option accordingly 
case $option in 
    #This is the first option
    "1") cat $1 | tr [:lower:] [:upper:] > new.txt && mv new.txt $1
	cat $1 
	;;
    #This is the second option
    "2") cat $1 | tr [:upper:] [:lower:] > new.txt && mv new.txt $1
	cat $1
	 ;;
     "*") echo "Invalid Option has been entered"
esac 

else
    echo "Invalid Number of arguments have been entered"
fi





