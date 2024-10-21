#Documentation
#Name : Harsh Patil
#Date : 22/7/2021
#Input :./picturerename.sh myphotos
#Output :
#ls(Before)
#DSN001.jpg  DSN002.jpg  DSN003.jpg  DSN004.jpg  picturerename.sh

#ls(after)
#myphotos_1.jpg  myphotos_3.jpg  picturerename.sh
#myphotos_2.jpg  myphotos_4.jpg

#Validatig if the number of cmd line arguments is less than 1
if [ $# -ne 1 ]
then
	echo "Invalid Input"
	exit 1
fi

#Counting the number of words present in the directory with .jpg files
count=`ls | wc -w`

#For loop for checking each .jpg file one by one
for i in `seq 1 $count`
do
    #Storing the jpg file into a new variable called newname
	newName=DSN00${i}
	#With the help of mv command renaming the file with the passed argument
    mv ${newName}.jpg $1_${i}.jpg
    #mv $1_${i}.jpg DSN00${i}.jpg
done
echo Done
