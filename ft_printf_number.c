#include "ft_printf.h"

int	print_mem(va_list ap, const char c)
{
	int			res;
	long long	num;

	res = 0;
	num = (unsigned long long)va_arg(ap, void *);
	res += write(1, "0x", 2);
	res += ft_print_num(num, c, 16);
	return (cnt);
}

int	print_int(va_list ap, const char c)
{
	int			res;
	long long	num;

	res = 0;
	num = va_arg(ap, int);
	if (num < 0)
	{
		num = -num;
		res += write(1, "-", 1);
	}
	res += ft_print_num(num, c, 10);
	return (res);
}

int	print_uint(va_list ap, const char c)
{
	int			cnt;
	long long	num;

	num = va_arg(ap, unsigned int);
	cnt = ft_print_num(num, c, 10);
	return (cnt);
}

int	print_hexa(va_list ap, const char c)
{
	int			cnt;
	long long	num;

	num = va_arg(ap, unsigned int);
	cnt = ft_print_num(num, c, 16);
	return (cnt);
}