#! /usr/bin/bash
read -p "Enter the first number : " NUM1
read -p "Enter the second number : " NUM2
read -p "Enter the third number : " NUM3
SUM=`expr $NUM1 + $NUM2 + $NUM3`
AVG=$(($SUM/3))
echo "The average of the three numbers is : " $AVG
