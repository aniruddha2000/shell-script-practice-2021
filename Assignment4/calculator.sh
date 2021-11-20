read -p "Enter First Number: " firstNum
read -p "Enter Second Number: " secondNum

sum=$(( firstNum + secondNum ))
sub=$(( firstNum - secondNum ))
mul=$(( firstNum * secondNum ))
div=$(( firstNum / secondNum ))

echo "Sum of two numbers is: $sum"
echo "Subtraction of two numbers is: $sub"
echo "Multiplication of two numbers is: $mul"
echo "Division of two numbers is: $div"