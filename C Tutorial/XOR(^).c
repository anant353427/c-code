#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=5, b=3;
    a=a^b;
    b=a^b;
    a=a^b;

    printf("After XOR, a=%d and b=%d",a,b);
    return 0;
}