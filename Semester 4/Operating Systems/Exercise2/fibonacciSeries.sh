read -p "Enter n : " N 
A=0
B=1
echo -n "The Fibonacci series is : "
for (( i=0; i<N; i++ )) 
do
    echo -n "$A "
    fn=$((A + B)) 
    A=$B 
    B=$fn 
done
