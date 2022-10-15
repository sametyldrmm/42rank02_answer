#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int bit = 0;
     char c  = 0;
    while (bit <= 7)
    {
        if((octet >> bit) & 1)
        {
            c = (c << 1) |1;
        }
        else
        {
            c = (c << 1);
        }
        
        bit++;
    }
    return c;
    
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
//0000 0010
//0000 0000

// 1001 0110
// 0000 1001
// 0110 0000


#include <stdio.h>
int main()
{
    printf("%d\n",  reverse_bits(3));
}