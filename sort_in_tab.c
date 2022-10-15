#include <stdio.h>
void sort_int_tab(int *tab, unsigned int len)
{
    int i;
    int tmp;
// 3 4 1
    i = 0;
    tmp = 0;
    int l = 0;
    while (i < len)
    {
        if(tab[i] < tab[i + 1])
            i++;
        else
        {
            tmp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = tmp;
            i = 0;
        }
        
    }
    l = 0;
    
    while (l <= len)
    {
        printf("..%d ",tab[l++]);
    }
    
} 
int main()
{
    int i;

    i = 0;
    int a[] = {6,8,9,1,75,4,155,2};
    sort_int_tab(a, 7);

}