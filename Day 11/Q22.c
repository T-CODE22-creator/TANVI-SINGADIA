/*Q22: Write a program to find profit or loss percentage given cost price and selling price.*/
#include<stdio.h>
int main()
{
    float cp, sp, diff, percentage;
    printf("Enter two Prices:");
    scanf("%f %f", &cp, &sp);
    if (sp > cp)
    {
        diff = sp - cp;
        percentage = (diff / cp) * 100;
        printf("Profit %.2f%%", percentage);
    }
    else if (cp > sp)
    {
        diff = cp - sp;
        percentage = (diff / cp) * 100;
        printf("Loss %.2f%%", percentage);
    }
	else {
		printf("No Profit No Loss");
	}
    return 0;
}
