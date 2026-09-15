// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main()
{
    int n,temp,digit,count,max=0,result=0,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;i<=9;i++)
    {
        temp=n;
        count=0;

        for(;temp>0;temp=temp/10)
        {
            digit=temp%10;

            if(digit==i)
                count++;
        }

        if(count>max)
        {
            max=count;
            result=i;
        }
    }

    printf("Most repeated digit = %d",result);

    return 0;
}
