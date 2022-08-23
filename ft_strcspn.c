#include<stdio.h>
#include<stdlib.h>
#include<string.h>
size_t ft_strcspn(const char *str1, const char *str2)
{
    size_t i = 0;
    while (str1[i])
    {
        int j = 0;
        while (str2[j])
        {
            if(str2[j] == str1[i])
            {
                return(i);
            }
            j++;
        }
        i++;
    }
    return(i);
        
}
int main(int argc,char **argv)
{
    printf("%lu %lu",strcspn(argv[1],argv[2]),ft_strcspn(argv[1],argv[2]));
}