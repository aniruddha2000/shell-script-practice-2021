echo " Script To Get the Greatest Number from a Given Set of Numbers\n"

read -p "Enter Number Of Numbers: " numOfElms

read -p "Enter First Number: " elmOne

while [ $numOfElms -gt 1 ]
do
    read -p "Enter Next Number: " elmNext
    if [ $elmNext -gt $elmOne ]
    then
        elmOne=$elmNext
    fi
    numOfElms=$(( numOfElms-1 ))
done

if [ $numOfElms -eq 1 ]
then
    echo "Greatest Number is: $elmOne"
fi