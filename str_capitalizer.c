#include<unistd.h>

void str_capitalizer(char *str)
{
    int i = 0;
    while (str[i])
    {
        char a = str[i];
        if( i != 0 && str[i] >= 'A' && str[i] <= 'Z' && str[i-1] == ' ' )
            a = str[i];
        else if( i == 0 && str[i] >= 'A' && str[i] <= 'Z')
            a = str[i];
        else if( i == 0 && str[i] >= 'a' && str[i] <= 'z' )
            a = str[i];
        else if(str[i] >= 'A' && str[i] <= 'Z')
            a = str[i] +32;
        else if(( i != 0 && str[i] >= 'a' && str[i] <= 'z' && str[i-1] == ' ' ))
            a = str[i] -32;
        write(1,&a,1);
        i++;
    }
    
}
int main(int argc,char **argv)
{
    int i = 1;
    while (argc > i)
    {
        str_capitalizer(argv[i]);
        write(1,"\n",1);
        i++;
    }
    if(argc == 1)
    {
        write(1,"\n",1);
    }
    return(0);
}