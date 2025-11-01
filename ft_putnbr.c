#include "ft_printf.h"

int	ft_putnbr(int nb, int i)
{
	long number = nb;
	if(number < 0)
	{
		i += ft_putchar('-');
		number *= -1;
	}
	if(number > 9)
		i += ft_putnbr(number / 10, i);
	i += ft_putchar(number % 10 + 48);
return i;
}
