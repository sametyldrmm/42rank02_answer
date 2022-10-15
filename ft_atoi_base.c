#include <stdio.h>

int ft_check(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return i;
        i++;
    }
    return 0;
}


int	ft_atoi_base(const char *str, int str_base)
{
    char *s= "0123456789abcdef";
    int i;
    int c =0;
    i = 0;

    while (str[i])
    {   
        c += ft_check(s,str[i]);
        if(str[i + 1])
            c *= str_base;
        i++;
    }

    return c;
}

int main()
{
    printf("%d\n ", ft_atoi_base("a", 16));
}