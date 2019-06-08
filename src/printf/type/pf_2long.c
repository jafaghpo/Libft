#include "ft_printf.h"

t_int64	pf_2long(va_list arg)
{
	t_int64 n;

	n = va_arg(arg, t_int64);
	return (n);
}
