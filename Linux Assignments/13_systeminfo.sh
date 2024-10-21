#Documentation
#Name : Harsh Patil
#Date : 15/7/2021
#Input :3 
#Output : Home Directory : /home/harsh

menu()
{
echo "Enter the option from 1-13 to get the particular information:
1. Currently logged user
2. Your shell directory
3. Home directory
4. OS name and version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information
10. Memory information
11. file system information
12. Currently running process"


echo -n "Option:"
read option

case $option in
    #Giving the currently logged in users
    1) echo "Currently Logged in users:";
	users;
	;;
	#Giving the shell directory
    2) echo "Your shell directory : $SHELL"
	;;
	#Giving the home directory
    3) echo "Home Directory : $HOME "
	;;
	#Giving the OS Name and version
    4) echo " OS Name and  Version"
	echo -n "operating system name is:  "; uname -s 
  	echo -n "operating system version is:  "; uname -v
	echo -n "operating system release is:  "; uname -r
	;;
	#Giving the current working directory
    5)echo "Current Working Directory is : $PWD ";
	;;
	#Giving the number of users who are logged in
    6) echo "Numbers of users who are logged in"
	who -u
	;;
	#Giving the number of shells
    7) echo "Numbers of shells"
	cat /etc/shells
	;;

	#Giving Hardisk iformation
    8) echo "Hard Disk information"
	 df -h
	;;
	#Giving CPU information
    9) echo "CPU information:"
       cat /proc/cpuinfo
	;;
	#Gives memory information
    10) echo "Memory information:"
     	cat /proc/meminfo
	;;
	   #Gives Files system information in human readable format
    11) echo "file system information:"
	 cat /proc/filesystems
	  
	   ;;
	   #Gives currently running process
     12) echo "Currently running process:"
	   ps

	   ;;
      *) echo "Invalid option:"
	   ;;
   esac
}

 while(true)
 do
 menu
 echo " Do you want to continue ? "
 read choice
 if [ "$choice" = "y" ]
 then
 menu
 else
 exit 1
 fi
 done


