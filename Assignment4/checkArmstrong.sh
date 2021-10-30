read -p "Enter the Number(Has To Be 3 Degit): " number

originalNumber=$number
armstrong=0

while [ $number -gt 0 ]
do
    digit=$(( $number % 10 ))
    armstrong=$(( $armstrong + $digit * $digit * $digit ))
    number=$(( $number / 10 ))
done

if [ $originalNumber -eq $armstrong ]
then
    echo "Number is Armstrong"
else
    echo "Number is not Armstrong"
fi