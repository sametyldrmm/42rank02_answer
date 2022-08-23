#include<stdio.h>
#include<stdlib.h>
void fprime(int a)
{
    int i = 0;
    int k = 2;
    int b = 9;
    if(a == 1)
        printf("%d",a);
    while (k <= a)
    {
        if(a % k == 0)
        {
            if( b != 9)
                printf("*");
            printf("%d",k);
            a = a / k;
            k--;
            b++;
        }
        k++;
    }
}
int main(int argc,char **argv)
{
    fprime(atoi(argv[1]));
}