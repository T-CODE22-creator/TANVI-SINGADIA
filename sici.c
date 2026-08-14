/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include<stdio.h>
#include<math.h>
int main()
{
    float p, r, t;
    float Simple_Interest, Compound_Interest;
    printf("enter principal:");
    scanf("%f", &p);
    printf("enter rate:");
    scanf("%f", &r);
    printf("enter time:");
    scanf("%f", &t);
    Simple_Interest = (p*r*t)/ 100;
    Compound_Interest = p* pow((1+r/100),t)-p;
    printf("simple_interest= %.2f\n", Simple_Interest);
    printf("compound_interest=%.2f\n", Compound_Interest);
    return 0;
}
