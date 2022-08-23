#include<unistd.h>
int search_n(char *s,char a,int b)
{
    int i = 0;
    while (s[i] && i != b)
    {
        if(s[i] == a)
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int search(char *s,char a)
{
    int i = 0;
    while (s[i])
    {
        if(s[i] == a)
        {
            return(1);
        }
        i++;
    }
    return(0);
}

int main(int argc,char **argv)
{
    if(argc != 3)
    {
        write(1,"\n",1);
        return(0);
    }
    int i = 0;
    while (argv[1][i])
    {
        if(search_n(argv[1],argv[1][i],i))
        {
            if(search(argv[2],argv[1][i]))
            {
                write(1,&argv[1][i],1);
            }
        }
        i++;
    }
    write(1,"\n",1);
}