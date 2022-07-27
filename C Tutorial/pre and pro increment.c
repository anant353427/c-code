#include<stdio.h>
main()
{
    int a,x;
    a=10; x=++a;
    printf("x=%d,a=%d",x,a);
    printf("x=%d,a=%d",x++,a);
    return 0;
}