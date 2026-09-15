// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int a[100],n,x,i,pos;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter sorted array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element: ");
    scanf("%d",&x);

    pos=0;

    while(pos<n && a[pos]<x)
        pos++;

    for(i=n;i>pos;i--)
        a[i]=a[i-1];

    a[pos]=x;
    n++;

    printf("Array: ");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
