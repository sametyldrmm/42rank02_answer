#include<stdlib.h>
#include<stdio.h>

int     word_count(char *str)
{
    int i = 0;
    int d = 1;
    while (str[i]== ' ')
    {
        i++;
    }
    while (str[i])
    {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1])
            d++;
        i++;
    }
    return(d);
}

char    **ft_split(char *str)
{
    char **ret_str = (char **)malloc(sizeof(char *)*word_count(str) + 1);
    int i = 0;
    int d = 0;
    while (str[i] == ' ')
    {
        i++;
    }
    while (str[i])
    {
        if(( i == 0 ||str[i - 1] == ' ' ) && str[i] != ' ' )
        {
            int k = i ;
            while (str[k] && str[k + 1] != ' ')
            {
                k++;
            }
            ret_str[d] = malloc(k - i);
            k = i ;
            int n = 0;
            while (str[k] && str[k] != ' ')
            {
                ret_str[d][n] = str[k];
                k++;
                n++;
            }
            ret_str[d][n] = '\0';
            d++;
        }
        i++;
    }
    ret_str[d] = '\0';
    return(ret_str);
}
int main(int argc,char **argv)
{
    char **den = ft_split(argv[1]);
    int i = 0;
    while (den[i])
    {
        printf("%s\n",den[i]);
        i++;
    }
    
}