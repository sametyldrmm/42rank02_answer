#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char *s = "zyxwvutsrqponmlkjihgfedcba";
    char *s1 = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

    if(argc == 2)
    {
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                write(1,&s[argv[1][i]] - 'a', 1);
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
              write(1,&s1[argv[1][i]] - 'A', 1);
            else
                write(1,&argv[1][i], 1);

            i++;
        }

    }
    write(1, "\n", 1);
   
    
    
}