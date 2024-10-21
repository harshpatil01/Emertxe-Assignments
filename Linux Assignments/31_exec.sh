#Documentation
#Name : Harsh Patil
#Date : 23/7/2021
#Input : ./exec.sh
#Output :
#Current Directory : /usr/local/sbin
#Current Directory : /usr/local/bin
#Current Directory : /usr/sbin
#Current Directory : /usr/bin
#Current Directory : /sbin
#Current Directory : /bin
#Current Directory : /usr/games
#Current Directory : /usr/local/games
#Current Directory : /snap/bin
#Total Number of executable files in the system : 3653

#Extracting the directories with the help of env and storing it into files variable
files=(`printenv PATH |tr ":" "\n"`)
#Calculating the length
len=${#files[@]} #number of paths

#For loop for checking if its a directory or not
for path in ${files[@]}
 do
     #Validating if the path passed is a directory or not 
   if [ ! -d $path ] 
    then
     echo "$path directory does not exist"
     continue 
   else
       echo "Current Directory : $path"
       #Changing the directory into the directory mentioned in the path variable
    cd $path
   fi
   #for loop for checking each file individually
   for file in $(ls $path)
   do
       #Checking if the file is executable or not
    if [ -x $file ] 
    then
	#Incrementing by 1 as each file is executable
    num=`expr $num + 1`
  fi
  done
 done
 #Printing message
echo " Total Number of executable files in the system : $num"
