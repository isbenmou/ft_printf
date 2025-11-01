#include "ft_printf.h"

static int hexa_upper(unsigned int number, int a)
{
	unsigned int i = 0;
	char *buf = "0123456789ABCDEF";
	while(buf[i])
	{
		if(i == number)
			a += write(1, &buf[i], 1);
	i++;
	}
return a;
}

int	put_hexa_uppercase(unsigned int number, int a)
{
	if(number >= 16)
		a += put_hexa_uppercase(number / 16, a);
	a += hexa_upper(number % 16, a);
return a;
}
