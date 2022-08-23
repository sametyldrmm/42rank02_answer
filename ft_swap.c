#include<stdio.h>

void ft_swap(int *a,int *b)
{
    int c = *b;
    int d = *a;
    *a = c;
    *b = d;    
}
int main()
{
    int a = 10;
    int b = 243;
    ft_swap(&a,&b);
    printf("%d",a);
}