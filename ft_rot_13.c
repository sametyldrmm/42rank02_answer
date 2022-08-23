#include<unistd.h>
#include<stdio.h>
char *min_alpha ="nopqrstuvwxyzabcdefghijklm";
char *max_alpha= "NOPQRSTUVWXYZABCDEFGHIJKLM";  

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
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            write(1,&min_alpha[argv[1][i] -'a'],1);
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            write(1,&max_alpha[argv[1][i] -'A'],1);
        else
            write(1,&argv[1][i],1);
        i++;
    }
    write(1,"\n",1);
    return(0);    
}
int main()
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c",i);
    }
    
}