/*Q40: Write a program to find the 1’s complement of a binary number and print it.*/
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of bits:");
    scanf("%d", &n);
    int binary[n], complement[n];
printf("Enter the binary number:\n");
for(i = 0; i < n; i++)
{
    scanf("%d", &binary[i]);
    complement[i] = 1 -  binary[i]; // calculate 1's complement
}
printf("1's complement of the binary number is:\n");
for(i = 0; i < n; i++)
{
    printf("%d", complement[i]);
}
return 0;
}