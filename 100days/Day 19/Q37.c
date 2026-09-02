/*Q37: Write a program to find the LCM of two numbers.*/
#include<stdio.h>
int main()
{
    int a, b, max, lcm;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b; // find the maximum of two numbers
    lcm = max; // intialize lcm with the maximum value
    while(1)
    {
        if (lcm % a == 0 && lcm % b == 0) // check if lcm is divisible by both numbers
        {
            printf("LCM of %d and %d is %d", a, b, lcm);
            break; // exit the loop if lcm is found
        }
        lcm++; // increment lcm by 1
    }
    return 0;
}
