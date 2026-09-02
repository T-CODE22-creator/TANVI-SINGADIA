/*Q29: Write a program to calculate the factorial of a number.*/
#include<stdio.h>
int main()
{
    int n, i;
    long long factorial = 1;
    printf("Enter a positive integer:");
    scanf("%d", &n);
    //check if the user has entered a negative number
    if (n < 0)
    {
        printf("Error!factorial of a negative number doesn't exist.");
    }
    else{
        for (i = 1; i <= n; ++i)
        {
            factorial *= i;       //factorial = factorial * i;
        }
        printf("Factorial of %d = %lld", n, factorial);
    }
    return 0;
}
