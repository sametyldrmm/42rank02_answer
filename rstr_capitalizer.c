#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j = 1;
    i = 0;
    while (argc > 1)
    {
        while (argv[j][i])
        {

            if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
                argv[j][i] += 32;
            if (argv[j][i + 1] <= 32 && argv[j][i] >= 'a' && argv[j][i] <= 'z' && argv[j][i])
                argv[j][i] -= 32;
            write(1, &argv[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        i = 0;
        argc--;
        j++;
    }
}