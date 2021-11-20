read -p "Enter a Number of Your Choice: " num

original=$num
reverse=0

while [ $num -gt 0 ]
do
    rem=$(( $num % 10 ))
    reverse=$(( $reverse * 10 + $rem ))
    num=$(( $num / 10 ))
done

echo "Reverse of $original is $reverse"