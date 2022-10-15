#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
char **ft_split(char *str)
{
    int i;
    char **str2 = (char **)malloc(1000);
    int k = 0;
    int b = 0;

    i = 0;
    while (str[i] == ' ' && str[i] == '\t')
        i++;
    while (str[i])
    {

        if (str[i] > 32)
        {
            str2[b] = (char *)malloc(1000);
            while (str[i] != ' ' && str[i] != '\t' && str[i])
            {
                str2[b][k] = str[i];
                k++;
                i++;
            }
            str2[b][k] = '\0';
            k = 0;
        }
        b++;
        str2[b] = '\0';
        i++;
    }

    return str2;
}
void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }

    
}
int main()
{
    int i;
    i = 0;
    int k = 0;
    char *s = "esra budak dfds ";
    char **ss = ft_split(s);

    while (ss[k])
    {
        k++;
    }
    k--;
    while (k >= 0)
    {
        ft_putstr(ss[k]);
        if(k != 0)
            write(1," ", 1);
        k--;
    }
    
    
    

   
}