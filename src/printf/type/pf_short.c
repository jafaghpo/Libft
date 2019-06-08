#include "ft_printf.h"

t_int64	pf_short(va_list arg)
{
	t_int64	n;

	n = va_arg(arg, int);
	n = (t_int16)n;
	return (n);
}
