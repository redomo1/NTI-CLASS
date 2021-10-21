#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=20;
    int*p=NULL;  //NULL pointer
    p=&x;
    *p=50;
    printf("%d",x);
    return 0;
}
