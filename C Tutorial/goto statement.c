#include<stdio.h>
int main()
{
    int n=1;
    repeat:
    printf("%d\n",n);

    n++;
    if(n<=10)
    goto repeat;
    printf("completed");
    return 0;
}