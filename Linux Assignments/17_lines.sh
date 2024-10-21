#Documentation
#Name : Harsh Patil
#Date : 22/7/2021
#Input : ./20lines.sh first.c
#Output :

#Before running the script
#include <stdio.h>
#int main() {
#   printf("Hello, World!");
#   return 0;
#}

#After running the script
#include <stdio.h>
#int main() {
#<-------Deleted------->
# return 0;
#}

#Storing the number of lines in the file into a variable num
num=`wc -l < $1` 
#Storing the 20 percent of total number of lines in a variable 
n=`expr $num / 5 ` # to get 20% of total lines
#For loop
for i in `seq 0 $n`
 do
 #Generating  any random number between 1 and 20 and giving one number one number
random=`shuf -i 1-20 -n1`
#Replacing the line number of $random with given string that is the deleted string
sed -i "${random} s/.*/<-------Deleted------->/" $1 
done


