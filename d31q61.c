// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main()
{
    int a[100],n,i,x,found=0;

    printf("Enter size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search: ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            found=1;
            break;
        }
    }

    if(found==1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
