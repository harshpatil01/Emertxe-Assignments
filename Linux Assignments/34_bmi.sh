#Documentation
#Name : Harsh Patil
#Date : 18/7/2021
#Input : ./bmi.sh
#Output : enter the weight in kg:
#	  45.5
#         enter the height in m:
#	  1.5
#	  you are normal




echo "enter the weight in kg:"
read w
echo "enter the height in m:"
read m
sq=`expr "scale=2; $m * $m" | bc`
bmi=`expr "scale=2; $w / $sq" | bc`
if [ "$((echo "$bmi < 18.5") | bc)" -eq 1 ]
    then
       echo "you are underweight"
  elif [ "$((echo "$bmi > 18.5") | bc)" -eq 1 ] && [ "$((echo "$bmi < 24.5") | bc)" -eq 1 ] 
  then
       echo "you are normal"
     elif [ "$((echo "$bmi > 25") | bc)" -eq 1 ] && [ "$((echo "$bmi < 29.9") | bc)" -eq 1 ]  
     then
         echo "you are overweight"
    else
         echo "you are obese"
    fi


