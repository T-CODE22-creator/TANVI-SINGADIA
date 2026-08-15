/*2. write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter value of a:\n");
    scanf("%d", &a);
    printf("enter value of b:\n");
    scanf("%d" , &b);
    printf("sum=%d\n", a+b);
    printf("difference:%d\n" , a-b);
    printf("product:%d\n" , a*b);
    printf("quotient:%d\n" , a/b);
    
    return 0;
}
