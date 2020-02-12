#! /usr/bin/bash
read -p "Enter the first number : " FIRST
read -p "Enter the second number : " SECOND 
read -p "Enter the third number : " THIRD    
if [ $FIRST -gt $SECOND ]  
then
  if [ $FIRST -gt $THIRD ]  
  then
    echo "$FIRST is the greatest number."
  else
    echo "$THIRD is the greatest number."
  fi
  else
    if [ $SECOND -gt $THIRD ] 
    then
      echo "$SECOND is the greatest number."
    else
      echo "$THIRD is the greatest number."
    fi
fi
