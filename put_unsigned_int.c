#include "ft_printf.h"

int put_unsigned_int(unsigned int number, int a)
{
	if(number >= 10)
		a += put_unsigned_int(number / 10, a);
	a += ft_putchar(number % 10 + 48);
return a;
}
