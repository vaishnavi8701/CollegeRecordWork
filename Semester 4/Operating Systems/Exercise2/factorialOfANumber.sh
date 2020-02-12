#! /usr/bin/bash
read -p "Enter a number : " NUM 
FACT=1
ITER=1
while [ $ITER -le $NUM ]
do 
  FACT=$((FACT*ITER))
  ITER=$((ITER+1))
done 
echo "The factorial of $NUM is : $FACT"
