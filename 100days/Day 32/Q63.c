/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
int n, m;
printf("Enter size of first array: ");
scanf("%d", &n);
int a[n];
printf("enter %d elements: ", n);
for(int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter size of second array: ");
scanf("%d", &m);
int b[m];
printf("Enter %d elements: ", m);
for(int i = 0; i< m; i++)
{
scanf ("%d", &b[i]);
}
// Print merged array
printf("Merged array: ");
for(int i = 0; i < n; i++)
{
printf("%d ", a [i]);
}
for (int i = 0; i < m; i++)
{
printf("%d ", b[i]);
}
return 0;
}
