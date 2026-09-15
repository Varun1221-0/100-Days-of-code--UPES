// Q52: Write a program to print the following pattern.

#include <stdio.h>

int main()
{
    int i;

    for(i=1;i<=14;i++)
    {
        printf("*\n");

        if(i==1 || i==5 || i==10)
            printf("\n");
    }

    return 0;
}
