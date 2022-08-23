#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char	*ft_ullitoa_base(unsigned long long int n, char *base)
{
	char					*a;
	unsigned long long int	nbr;
	size_t					size;
	int						b_len;

	b_len = strlen(base);
	nbr = n;
	size = 0 + (n == 0);
	while (n)
	{
		n /= b_len;
		size++;
	}
	a = (char *)malloc(size + 1);
	if (!(a))
		return (0);
	a[size--] = '\0';
	while (nbr > 0)
	{
		a[size--] = base[nbr % b_len];
		nbr /= b_len;
	}
	if (size == 0 && a[1] == '\0')
		a[0] = '0';
	return (a);
}
void print_bits(unsigned char a)
{
	int i = 8;
	while (i >= 0)
	{
		printf("%d",a >> i & 0X01);
		i--;
	}
	printf("\n");
}

int main()
{
    // int i = 123;                                                          int a = 254;
    // print_bits(i);
	// print_bits(a);
	// // i = i << 1 | 0x01 ;
    //  printf("i = %d %12s",i && 0x01,ft_ullitoa_base(i,"01"));                    printf("'\t''\t'a = %d\t%12s\n",a,ft_ullitoa_base(a,"01"));              
    // printf("i = %d %12s",i >> 1 & 0x01,ft_ullitoa_base(i << 1,"01")); /*#####*/printf("'\t''\t'a = %d\t%12s\n",a >> 1,ft_ullitoa_base(a >> 1,"01"));
    // printf("i = %d %12s",i >> 2 & 0x01,ft_ullitoa_base(i << 2,"01")); /*#####*/printf("'\t''\t'a = %d\t\t%12s\n",a >> 2,ft_ullitoa_base(a >> 2,"01"));
    // printf("i = %d %12s",i >> 3 & 0x01,ft_ullitoa_base(i << 3,"01")); /*#####*/printf("'\t''\t'a = %d\t\t%12s\n",a >> 3,ft_ullitoa_base(a >> 3,"01"));
    // printf("i = %d %12s",i >> 4 & 0x01,ft_ullitoa_base(i << 4,"01")); /*#####*/printf("'\t''\t'a = %d\t\t%12s\n",a >> 4,ft_ullitoa_base(a >> 4,"01"));
    // printf("i = %d %12s",i >> 5 & 0x01,ft_ullitoa_base(i << 5,"01")); /*#####*/printf("'\t''\t'a = %d\t\t%12s\n",a >> 5,ft_ullitoa_base(a >> 5,"01"));
    // printf("i = %d %12s",i >> 6 & 0x01,ft_ullitoa_base(i << 6,"01")); /*#####*/printf("'\t''\t'a = %d\t\t%12s\n",a >> 6,ft_ullitoa_base(a >> 6,"01"));
    // printf("i = %d %12s",i >> 7 & 0x01,ft_ullitoa_base(i << 7,"01")); /*#####*/printf("'\t''\t'a = %d\t\t%12s\n",a >> 7,ft_ullitoa_base(a >> 7,"01"));
    //printf("%d",i );

	int b = 123;
	print_bits(b);
	int c = 0;
	int i = 8;
	// print_bits((b&1 << 7) | (b&2 << 5) | (b&4 << 3) | (b&8 << 1) | (b&0x10 >> 1) | (b&0x20 >> 3) | (b&0x40 >> 5) | (b&0x80 >> 7));
	// while (i >= 0 )
	// {
	// 	int k = b & 0x01;
	// 	b = b >> 1;
	// 	printf("%d",k);
	// 	if(k)
	// 	{
	// 		c = c >> i | 0x01;
	// 	}
	// 	else
	// 	{
	// 		c = c >> i & -1;
	// 	}
	// 	c = c << i;
	// 	printf("while içi c ");
	// 	i--;
	// }
	
	//print_bits(c);
}