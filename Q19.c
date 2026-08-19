/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include<stdio.h>
int main()
{
    float a, b, c;
printf("Enter the three sides of the Triangle:");
scanf( "%f %f %f", &a, &b, &c);
// Check whether the Triangle is valid
if(a + b > c && b + c > a && a + c > b)
{
printf("Triangle is valid.\n");
//Equilateral
if (a == b && b == c)
{
printf ("Triangle is Equilateral.\n");
}
//Right-angled triangle
else if((a*a + b*b == c*c) || (a*a + c*c == b*b)  || (b*b + c*c == a*a))
{
printf("Triangle is Right Angled.\n");
}
//Isosceles
else if(a == b || b == c|| a == c)
{
printf("Triangle is Isosceles.\n");
}
//Scalene
else
{
printf("Triangle is Scalene.\n");
}
}
else
{
    printf("Triangle is not valid.\n");
}
return 0;
}

 