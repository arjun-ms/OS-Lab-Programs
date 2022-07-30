echo "enter number of terms: "
read n
echo "Fibonacci series:"
first=0
second=1
echo $first
echo $second
for ((i=0;i<n-2;i++))
do
third=$((first+second))
echo $third
first=$((second))
second=$((third))
done
