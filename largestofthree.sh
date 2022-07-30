echo "enter the first num: "
read num1
echo "enter the second num: "
read num2
echo "enter the third num: "
read num3
if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
echo "$num1 is the largest"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
echo "$num2 is the largest"
else
echo "$num3 is the largest"
fi
