#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int i;
    int len;
    i = 0;

    while (argv[1][len])
        len++;
    i = len - 1;
    while (argv[1][i] == ' ' || argv[1][i] == '\t')
    {
        i--;
    }

    while (argv[1][i] != ' ' && argv[1][i] != '\t' && i >= 0)
    {
        i--;
    }
    i++;
    while (argv[1][i] > 32 && i>=0)
    {
        write(1, &argv[1][i], 1);
        i++;
    }

}