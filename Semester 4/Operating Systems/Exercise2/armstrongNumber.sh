read -p "Enter A Number : " NUM
TEMP=$NUM
SUM=0
REM=0
PROD=0
while [ $TEMP -gt 0 ]
do
  REM=`expr $TEMP % 10`
  PROD=`expr $REM \* $REM \* $REM`
  SUM=`expr $SUM + $PROD`
  TEMP=`expr $TEMP / 10`
done

if [ $SUM -eq $NUM ]
then
  echo "It is an Armstrong Number."
else
  echo "It is not an Armstrong Number."
fi
