#include "ft_printf.h"

int	print_address(void *ptr)
{
	unsigned long long address = (unsigned long long)ptr;
	write(1, "0x", 2);
	return put_hexa_lowercase(address, 0);
}
