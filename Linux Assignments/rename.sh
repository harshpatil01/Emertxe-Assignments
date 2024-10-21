#Documentation
#Name : Harsh Patil
#Date :
#Input :
#Output :

#checking if  argument count is not equal to 1
   if [ $# -ne 1 ]
  then
          echo "Error: no file/directory name is given"
         exit 1
 fi
  
  path=$1
  currentDirectory=`echo $PWD`
  echo $currentDirectory
 #currentDirectory=`basename $PWD`
  
  #go to parent directory to check whether it is ok to rename or not
 cd ../
  
  
  #check if the given file/directory path exists or not
  if [ -e $path ]
  then
        echo "Error: $path File/directory already exists in the parent dire    ctory. Not renaming"
          exit 1
  else
          mv "$currentDirectory" "$path"
  fi
  

