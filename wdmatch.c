

#include <unistd.h>

char ft_check(char *str, char c, int i)
{
    int j;

    j = 0;

    while (j < i)
    {
        if (str[j] == c)
            return 0;
        j++;
    }
    return 1;
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int len;

    j = 0;
    i = 0;
    len = 0;
    while (argv[1][i])
    {
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
            {
                len++;
                break;
            }
            j++;
        }

        i++;
    }
    i = 0;
    while (argv[1][i])
        i++;
    if(i == len)
        write(1,argv[1], len);
    
}