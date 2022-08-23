#include<stdio.h>
#include<stdlib.h>
int bas_say(int a)
{
    int i = 0;
    int b = 1;
    while (b <= a)
    {
        if(a % b == 0)
        {
            i++;        
        }
        b++;
    }
    return(i);
}
int *bas_doldur(int a)
{
    int *dizi = malloc(bas_say(a)*4);
    int b = 1;
    int i = 0;
    while (b <= a)
    {
        if(a % b == 0)
        {
            dizi[i] = b;
            i++;
        }
        b++;
    }
    return(dizi);
}
void ortak_bul(int *arg1,int arg1_el,int*arg2,int arg2_el)
{
    int i = 0;
    int k = 0;
    while (arg1_el > i)
    {
        int j = 0;
        while (arg2_el > j)
        {
            if(arg1[i] == arg2[j])
                k = arg1[i];
            j++;
        }
        i++;
    }
    free(arg1);
    free(arg2);
    printf("%d",k);
}
// biraz yorgunluktan saçmaladık bas_doldura iki paramtere gelicek bir geerçek sayı birde malloc sayısı
int main(int argc,char **argv)
{
    int a = bas_say(atoi(argv[1]));
    int b = bas_say(atoi(argv[2]));
    int *aa = bas_doldur(atoi(argv[1]));
    int *bb = bas_doldur(atoi(argv[2]));
    ortak_bul(aa,a,bb,b);
    // printf("\n%d\n",bas_say(17));
    // printf("\n%d",bas_say(3));
}