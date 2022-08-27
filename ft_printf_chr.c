#include "ft_printf.h"

int print_chr(va_list ap) 
{
    char    c;

    c = (char)va_arg(ap, int);
    write(1, c, 1);
    return 1;
}

int	print_str(va_list ap)
{
	int		res;
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	res = ft_strlen(str);
	write(1, str, res);
	return (res);
}