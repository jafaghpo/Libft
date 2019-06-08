#include "ft_printf.h"

t_int64	pf_int(va_list arg)
{
	t_int64 n;

	n = va_arg(arg, int);
	return (n);
}
