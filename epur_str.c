#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    int i;

    i = 0;
    while (argv[1][i] )
    {
        if ((argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
                i++;
            if(argv[1][i])
                write(1, " ", 1);
            i--;
        }
        else if ((argv[1][i] != ' ' && argv[1][i] != '\t'))
        {
            write(1, &argv[1][i], 1);
        }
        i++;
    }
}