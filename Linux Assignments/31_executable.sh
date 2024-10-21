#Documentation
#Name : Harsh Patil
#Date : 18/7/2021
#Input : ./executable.sh
#Output : 
#Current Directory:/usr/local/sbin
#Current Count : 1
#Current Directory:/usr/local/bin
#Current Count : 1
#Current Directory:/usr/sbin
#Current Count : 383
#Current Directory:/usr/bin
#Current Count : 1404
#Current Directory:/sbin
#Current Count : 1
#Current Directory:/bin
#Current Count : 1
#Current Directory:/usr/games
#Current Count : 5
#Current Directory:/usr/local/games
#Current Count : 1
#Current Directory:/snap/bin
#Current Count : 4
#Current Directory:
#Current Count : 47
#Total sum : 1848


files=(`printenv PATH | tr ":" "\n"`)
total=0
for i in `seq 0 ${#files[@]}`
do
    echo -e "Current Directory:${files[$i]}"
    array=${files[$i]}
    count=(`find ${array[$j]} -maxdepth 1 -executable | wc -l`) 
    total=$(($count+$total))	
    echo "Current Count : $count"
done
echo " Total sum : $total"



