#include<unistd.h>

int main(int argc,char **argv)
{
    if(argc != 2)
    {
        write(1,"\n",1);
        return(0);
    }
    int i = 0;
    while (argv[1][i])
    {
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            int b = 0;
            while (argv[1][i] - b >= 'a')
            {
                write(1,&argv[1][i],1);
                b++;
            }
        }
        else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            int c = 0;
            while (argv[1][i] - c >= 'A')
            {
                write(1,&argv[1][i],1);
                c++;
            }
        }
        else
        {
            write(1,&argv[1][i],1);
        }
        i++;
    }
    write(1,"\n",1);
    return(0);
}