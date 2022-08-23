#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int ft_atoi(const char *str)
{
    int i = 0;
    long long number = 0;
    int neg = 1;
    
    while (str[i] == ' ')
    {
        i++;
    }
    if(str[i] == '-')
    {
        i++;
        neg = -1;
    }
    else if(str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = 10 * number + str[i] - '0';
        i++;
    }
    if(4294967296 < number || -4294967296 > number)
    {
        return(-1);
    }
    return(number * neg);
}
int main(int argc,char **argv)
{
    printf("%d %d",atoi(argv[1]),ft_atoi(argv[1]));   
}