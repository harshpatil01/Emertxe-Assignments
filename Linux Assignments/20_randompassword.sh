#Documentation
#Name : Harsh Patil
#Date : 16/7/2021
#Input : ./randompassword.sh
#Output : jt;#7p7p
#	peGbP!'8
# 	\b&0c.fK
#	VjskJ,w;
# 	W/Z}>h^7
# 	b..'}r!~
# 	5*3r;s-w
#	5CM\gNs7
#	z]5YpQSH
# 	5=w&~tXy

#Generating random characters ,printing only special characters with the help of tr command, printing only 8 characters and printing the first 10 line
cat /dev/urandom | tr -cd [:print:] | fold -b8 | head -10




