#include "ft_printf.h"

int	format(va_list *lst, char c)
{
	int count = 0;
	if(c == 's')
        	count = ft_putstr(va_arg(*lst, char *));
        else if(c == 'c')
		count = ft_putchar(va_arg(*lst, int));
	else if(c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(*lst, int), 0);
        else if(c == 'p')
		count = print_address(va_arg(*lst, void *));
        else if(c == 'x')
		count = put_hexa_lowercase(va_arg(*lst, unsigned int), 0);
        else if(c == 'X')
		count = put_hexa_uppercase(va_arg(*lst, unsigned int), 0);
        else if(c == 'u')
		count = put_unsigned_int(va_arg(*lst, unsigned int), 0);
        else if(c == '%')
		count = ft_putchar('%');
return count;
}

int check_format(char c)
{
	if(c == 's' || c == 'c' || c == 'd' || c == 'p' || c == 'x'
	|| c == 'X' || c == 'u' || c == '%')
		return 1;
	else
		return 0;
}

int ft_printf(const char *str, ...)
{
	int i = 0;
	int count = 0;
	va_list lst;
	va_start(lst, str);
	while(str[i])
	{
		if(str[i] == '%' && check_format(str[i+1]) == 1)
		{
			i++;
			count += format(&lst, str[i]);
		}else if(str[i] != '%')
		{
			count += write(1, &str[i], 1);
		}
	i++;
	}
return count;
}
