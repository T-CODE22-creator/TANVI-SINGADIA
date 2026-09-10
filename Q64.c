/*Q64: Find the digit that occurs the most times in an integer number.*/
#include<stdio.h>
int main()
{
long long num;
int digit, maxDigit = 0;
int count[10] = {0};
printf("Enter an integer: ");
scanf("%lld", &num);
//Count frequency of each digit 
while (num > 0)
{
digit = num % 10;
count[digit]++;
num = num / 10;
}
//find digit occuring most times
for (int i = 0; i< 10; i++)
{
if(count[i] >
count[maxDigit])
{maxDigit = i;}
}
printf("Digit occuring most times: %d", maxDigit);
return 0;
}
