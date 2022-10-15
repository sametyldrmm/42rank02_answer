#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int a)
{
    char *s = "0123456789";

    if(a > 9)
        ft_putnbr(a / 10);
    write(1, &s[a % 10], 1);

}
int atoi(char *str)
{

    int i = 0;
    int num = 0;
    while (str[i])
    {
        if (str[i] > 9)
        {
            num += str[i] - 48;
            if (str[i + 1])
                num *= 10;
        }
        else
            num = str[i] - 48;
        i++;
    }

    return num;
}
void ft_write(int i,int num, int carpim)
{
    ft_putnbr(i);
    write(1,"\tx\t", 3 );
    ft_putnbr(num);
    write(1," =", 3 );
    ft_putnbr(carpim);
    write(1,"\n", 1);
}
int main(int argc, char **argv)
{
    int num = atoi(argv[1]);
    int i = 1;
    int carpim = 1;
    while (i <= 9)
    {
        carpim = i * num;

        ft_write(i,num, carpim);

        i++;
    }


}