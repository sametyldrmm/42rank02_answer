#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int search_first_n(int a,char *str,char b)
{
    int i = a;
    while (str[i])
    {
        if(str[i] == b)
            return(i + 1);
        i++;
    }
    return(0);
}
int main(int argc,char **argv)
{
    int i = 0;
    int c = 0;
    int d = 0;
    while (argv[1][i])
    {
        if(search_first_n(c,argv[2],argv[1][i]))
        {
            c = search_first_n(i,argv[2],argv[1][i]) -1;
            d++;
        }
        i++;
    }
    int k = 0;
    while(argv[1][k])
        k++;
    if(k == d)
        write(1,argv[1],k);
    write(1,"\n",1);    
    return(0);
}