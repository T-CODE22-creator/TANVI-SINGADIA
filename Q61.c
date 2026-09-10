/*Q61: Search for an element in an array using linear search.*/
#include<stdio.h>
int main()
{
    int n, i, search, found = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            found = i;
            break;
        }
    }
    if (found != -1)
    printf("Found at index %d", found);
    else 
    printf("-1");
    return 0;
}
