#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
    char *s = "0123456789";
    char *str = malloc(1000);
    char *str2 = malloc(1000);

    int num = 0;
    int i = 0;
    while (nbr)
    {
        if(nbr < 0)
        {
            str[i] = '-';
            nbr *= -1;
            i++;
        }   

    
        if (nbr > 9)
        {
            str[i] = s[nbr % 10];
            nbr = nbr / 10;
        }
        else
        {
            str[i] = s[nbr % 10];
            nbr = nbr /10;
        }
        i++;
    }
    int j = 0;
    i--;
    if(str[0] == '-')
    {
        str2[j] = '-';
        j++;
    }
    while (i >=   (str[0] == '-'))
    {
        str2[j] = str[i];
        j++;
        i--;
    }
    
    return str2;
}

int main()
{
    printf("%s\n", ft_itoa(-1324));
}