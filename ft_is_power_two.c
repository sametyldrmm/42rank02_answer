#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int two(unsigned int a)
{
    float b;
    b = a;
    while (a)
    {
        a = a / 2;
        b = b / 2;
    }
    if( b != 0.5)
        return(0);
    return(1);
}
int main()
{
    printf("%d ",two(32));
}