#Documentation
#Name : Harsh Patil
#Date : 16/7/2021
#Input : ./sayhello.sh
#Output : Good Evening harsh , Have a nice day !This is Friday 16 in Jul (19:46:00)


hour=(`date +%H`)
day=(`date +%A`)
date=(`date +%d`)
month=(`date +%b`)
time=(`date +%T`)

#Validation of hour
if [ $hour -ge 5 -a $hour -le 12 ]
    then
	 greeting="Good Morning"
    elif [ $hour -ge 12 -a $hour -le 13 ]
    then
      	greeting="Good Noon"
    elif [ $hour -ge 14 -a $hour -le 17 ]
    then
	greeting="Good Afternoon"
    elif [ $hour -ge 17 -a $hour -le 21 ]
    then
	greeting="Good Evening"
    elif [ $hour -ge 21 -a $hour -le 5 ] 
    then
	greeting="Good Night"
fi
echo -e "$greeting `whoami` , Have a nice day !"
echo -e "This is $day $date in $month ($time)"
