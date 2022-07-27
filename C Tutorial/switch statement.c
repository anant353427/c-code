#include<stdio.h>
main()
{
    int x=6;
    switch(x)
    { default:x+=2;
              break;
    case 4:x=4;
    case 5:x++;
          break;
    }
    printf("%d",x);
}