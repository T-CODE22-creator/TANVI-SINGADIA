/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include<stdio.h>
int main(){
   int n, hr, min, sec;
    printf("enter time in sec:");
    scanf("%d", &n);
    hr =n/3600;
    min= (n%3600)/60;
    sec= n%60;
    printf("time=%02d:%02d:%02d\n", hr, min, sec);
    return 0; 
}
    

