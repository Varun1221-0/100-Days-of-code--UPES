// Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main()
{
    int a[100],n,x,i,left,right,mid,found=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter sorted array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element: ");
    scanf("%d",&x);

    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;

        if(a[mid]==x)
        {
            found=1;
            break;
        }
        else if(x>a[mid])
            left=mid+1;
        else
            right=mid-1;
    }

    if(found==1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
