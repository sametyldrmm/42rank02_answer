#include<stdlib.h>
#include<stdio.h>

int *ft_range(int a,int b)
{
    int d = 0;
    if(b < a)
    {
        int l = b;
        b = a;
        a = l;
    }
    while (a + d <= b)
        d++;
    int *int_dizi = malloc(sizeof(int) * d);
    int k = 0;
    while (k < d)
    {
        int_dizi[k] = a + k;
        printf("%d ",int_dizi[k]);
        k++;
    }
    printf("\n");
}

int main()
{
    ft_range(1,3);
    ft_range(-1,2);
    ft_range(0,0);
    ft_range(0,-3);

}