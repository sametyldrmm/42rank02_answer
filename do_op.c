#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int number1;
    char op;
    int number2;

    number1 = atoi(argv[1]);
    op = argv[2][0];
    number2 = atoi(argv[3]);

    if(argc == 4)
    {
        if(op == '+')
            printf("%d",number1 + number2 );
        if(op == '-')
            printf("%d",number1 - number2 );
        if(op == '/')
            printf("%d",number1 /  number2 );
        if(op == '*')
            printf("%d",number1  * number2 );

    }

}