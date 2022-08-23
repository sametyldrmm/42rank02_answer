#include<unistd.h>

int main(int argc,char **argv)
{
    int i = 0;
    int a = 0;
    int two_first_i = 0;
    while (argv[1][i] == ' ')
    {
        two_first_i++;
        i++;
    }
    int d = 0;
    while (argv[1][i] != ' ' && argv[1][i] != '\0')
    {
        i++;
        d++;
    }
    int c = 0;
    while (argv[1][i] == ' ')
    {
        i++;
        c++;
    }
    while (argv[1][i])
    {
        if(argv[1][i] == ' ' && argv[1][i+1] != ' ' && argv[1][i+1] != '\0' && a)
        {
            write(1," ",1);
        }
        if(argv[1][i] != ' ')
            write(1,&argv[1][i],1);
        a++;
        i++;
    }
    
    int k = 0;
    if(argv[1][two_first_i + d + c ])
        write(1," ",1);
    while (k < d && argv[1][two_first_i +k])
    {
        write(1,&argv[1][two_first_i + k],1);
        k++;
    }
    
}