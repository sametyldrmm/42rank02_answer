#include<unistd.h>
int control(char *str1,char *str2)
{
    int i = 0;
    int j = 0;
    while (str2[i])
    {
        if(str1[j] == str2[i])
        {
            j++;
            if(str1[j] == '\0')
                return(1);
        }
        i++;
    }
    return(0);
}
int main(int argc,char **argv)
{
    if(control(argv[1],argv[2]))
        write(1,"1",1);
    else
        write(1,"0",1);

}