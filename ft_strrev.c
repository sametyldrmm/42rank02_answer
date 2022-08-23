#include<stdio.h>
#include<string.h>
char    *ft_strrev(  char *s)
{
    int i = 0;
    int j = 0;
    while(s[j])
        j++;
    j--;
    while ( i < j)
    {
        char a = s[j];
        s[j] = s[i];
        s[i] = a;
        i++;
        j--;
    }
    return(s);
}
int main()
{
    char *a = strdup("123456");
    ft_strrev(a);
    printf("%s",a);
}