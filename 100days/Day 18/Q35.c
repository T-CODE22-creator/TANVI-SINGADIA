/*Q35: Write a program to print all factors of a given number.*/
#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Factors of %d are:", num);
    for(i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i); // 2 spaces after %d to separate the factors
        }
    }
    return 0;
}
