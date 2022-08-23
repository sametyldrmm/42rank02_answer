#include<unistd.h>
void ft_putnbr(size_t i)
{
    if(i > 10)
        ft_putnbr(i / 10);
    char a = (i % 10) + 48;
    write(1,&a,1);
}

int main()
{
    for (size_t i = 1; i <= 100; i++)
    {
        if(i % 15 == 0)
            write(1,"fizzbuz\n",9);
        else if(i % 5 == 0)
            write(1,"buzz\n",6);
        else if( i % 3 == 0)
            write(1,"fiz\n",5);
        else
        {
            ft_putnbr(i);
            write(1,"\n",1);
        }
    }
    
}