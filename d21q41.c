// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int n,first,last,temp,p=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;
    last=n%10;

    for(;n>=10;n=n/10)
        p=p*10;

    first=n;

    temp=temp-first*p;
    temp=temp-last;
    temp=temp+last*p;
    temp=temp+first;

    printf("After swapping = %d",temp);

    return 0;
}
