#include<unistd.h>
void    print_hex(int a)
{
    char *str ="0123456789abcdef";

    if(a > 16)
        print_hex(a / 16);
    write(1,&str[a % 16],1);
}
int main()
{
    print_hex(10);
    print_hex(5156454);
}