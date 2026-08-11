/*write a program to calculate the area and circumference of a circle given its radius.*/
#include <stdio.h>
int main(){ 
    float r;
    printf("enter value of r:\n");
    scanf("%f", &r);
    printf("area:%f\n", 3.14*r*r);
    printf("circuference:%f\n", 2*3.14*r);
    return 0;
}