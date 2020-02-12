read -p "Enter Year : " YEAR 
if ( ( $YEAR % 4 -eq 0 ) -a ( ($YEAR % 100 -eq 0) -o ( $YEAR % 400 -ne 0) ) )
then 
echo "$YEAR is a leap year."
else 
echo "$YEAR is not a leap year."
fi
