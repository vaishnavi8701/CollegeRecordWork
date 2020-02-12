# !/bin/bash 
  
# Take user Input 
read -p "Enter the first number : " NUM1
read -p "Enter the second number : " NUM2
# Input type of operation 
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
read -p "Enter your choice : " CHOICE 
# Switch Case to perform 
# calulator operations 
case $CHOICE in
  1)res=`echo $NUM1 + $NUM2 : $(($NUM1 + $NUM2))` 
  ;; 
  2)res=`echo $NUM1 - $NUM2 : $(($NUM1 - $NUM2))` 
  ;; 
  3)res=`echo $NUM1 '*' $NUM2 : $(($NUM1 * $NUM2))` 
  ;; 
  4)res=`echo $NUM1 / $NUM2 : $(($NUM1 / $NUM2))` 
  ;; 
  *)echo "Invalid Choice."
    exit 0
  ;;
esac
echo "$res"
