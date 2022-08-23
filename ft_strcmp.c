#include<string.h>
#include<stdio.h>

int ft_strcmp(const char *str1,const char *str2)
{
    int i = 0;
    while(str1[i] == str2[i] && str1[i] && str2[i])
        i++;
    return(str1[i] - str2[i]);
}
int main(int argc,char **argv)
{
    printf("%d %d",strcmp(argv[1],argv[2]),ft_strcmp(argv[1],argv[2]));
}