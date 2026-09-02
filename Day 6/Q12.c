/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer:");
    scanf("%d", &n);
    if (n >=0)
    {if (n == 0)
    printf ("zero");
    else 
    printf("positive");
}
else{
    printf("negative");
}
return 0;
}
