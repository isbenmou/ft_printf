#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int ft_putchar(char c);
int    ft_putnbr(int nb, int i);
int ft_putstr(char const *str);
int    print_address(void *ptr);
int    put_hexa_lowercase(unsigned int number, int a);
int 	put_hexa_uppercase(unsigned int number, int a);
int put_unsigned_int(unsigned int number, int a);

#endif
