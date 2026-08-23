/*Q25: Write a program to implement a basic calculatoQr using switch-case for +, -, *, /, %.*/
#include<stdio.h>
int main()
{
char operator;
int a, b;
printf("Enter First number:");
scanf("%d", &a);
printf("Enter operator(+,-,*,/,%):");
scanf(" %c", &operator);
printf("Enter Second number:");
scanf("%d", &b);
switch(operator)
{
case '+':
    printf("Result: %d", a + b);
    break;
case '-':
    printf("Result: %d", a - b);
    break;
case '*':
    printf("Result: %d", a * b);
    break;
case '/':
    printf("Result: %d", a / b);
    break;
case '%':
    printf("Result: %d", a % b);
    break;
default:
    printf("Invalid operator!");
}
return 0;
}