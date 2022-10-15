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

    j = 0;
    i = 0;
    while (argv[1][i])
    {
        if (ft_check(argv[1], argv[1][i], i))
            write(1, &argv[1][i], 1);
        i++;
    }
    while (argv[2][j])
    {
        if (ft_check(argv[2], argv[2][j], j))
        {

            if (ft_check(argv[1], argv[2][j], i))
                write(1, &argv[2][j], 1);
            i++;
        }
        j++;
    }
}