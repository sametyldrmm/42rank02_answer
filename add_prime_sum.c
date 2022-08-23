#include<stdio.h>
#include<unistd.h>

int ft_putnbr(unsigned long long i)
{
    char *str="0123456789";
    if(i > 9 )
        ft_putnbr(i / 10);
    write(1,&str[i % 10],1);    
}

int prime_number(unsigned long long c)
{
    int i = 2;
    if(c % i == 0)
        return(0);
    while (i <= c)
    {
        if(c % i == 0)
            return(0);
        i += 2;
    }
    return(1);
}

size_t add_prime_sum(int b)
{
    size_t total = 2;
    size_t add = 3;
    while (add <= b)
    {
        if(prime_number(add))
            total += add;
        add += 2;
        ft_putnbr(add);
        write(1,"\n",1);
    }
    return(total);
}

int main()
{
    ft_putnbr(add_prime_sum(100000000));
}