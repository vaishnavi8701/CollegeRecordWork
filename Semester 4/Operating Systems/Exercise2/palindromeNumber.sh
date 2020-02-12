read -p "Enter A Number : " NUM
TEMP=$NUM
REVNUM=0
while [ $TEMP -gt 0 ]
do
  REM=`expr $TEMP % 10`
  REVNUM=`expr $REVNUM \* 10 + $REVNUM`
  TEMP=`expr $TEMP / 10`
done

if [ $NUM -eq $REVNUM ]
then
  echo "$NUM is a palindrome."
else
  echo "$NUM is not a palindrome."
fi
