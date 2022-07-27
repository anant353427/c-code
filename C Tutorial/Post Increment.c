#include<stdio.h>
main()
{
    int a,b;
    a=4; b=a++ + a++;
    printf("%d %d",a,b);
    return 0;
}