#include <stdio.h>
#include <stdlib.h>
int *ft_range(int end, int start)
{
    int i;
    int *a;

    i = 0;

    if (start > end)
    {
        a = (int *)malloc(sizeof(int) * start - end + 1);
        while (start >= end)
        {
            a[i] = start;
            start--;
            i++;
        }
    }

    else if (start < end)
    {
        a = (int *)malloc(sizeof(int) * end - start + 1);

        while (start <= end)
        {
            a[i] = start;
            start++;
            i++;
        }
    }
    return a;
}

// 0, 5
// 5, 0

int main()
{
    int i;

    i = 0;
    int *a = (int *) malloc(100);
    a = ft_range(0, 5);
    while (i<=5)
    {
        printf("%d\n", a[i]);
        i++;
    }
}