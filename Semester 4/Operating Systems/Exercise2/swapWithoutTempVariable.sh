read -p "Enter the first number : " NUM1
read -p "Enter the second number : " NUM2
echo "Before Swapping : NUM1=$NUM1, NUM2=$NUM2"
NUM1=`expr   $NUM1   +   $NUM2`
NUM2=`expr   $NUM1   -   $NUM2`
NUM1=`expr    $NUM1   -   $NUM2`
echo "After Swapping : NUM1=$NUM1, NUM2=$NUM2"
