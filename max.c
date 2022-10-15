#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    int i;
    int max;

    max = 0;
    i = 0;
    max =tab[i];
    while (i<len)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    

    return max;

}

int main()
{
    int a[] = {35,68,4,5,1,90};

    printf("%d\n", max(a,6));
}
//34, 6 , 90, 4, 45