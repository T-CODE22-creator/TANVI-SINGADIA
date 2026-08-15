/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>
int main()
{int l, b ;
    printf("enter value of l:\n");
    scanf("%d", &l);
    printf("enter value of b:\n");
    scanf("%d", &b);
printf("area:%d\n", l*b);
printf("perimeter:%d\n", 2*(l+b));
    return 0;
}
