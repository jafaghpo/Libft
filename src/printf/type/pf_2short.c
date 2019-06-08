#include "ft_printf.h"

t_int64	pf_2short(va_list arg)
{
	t_int64 n;

	n = va_arg(arg, int);
	n = (t_int8)n;
	return (n);
}
