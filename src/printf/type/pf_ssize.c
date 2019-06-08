#include "ft_printf.h"

t_int64	pf_ssize(va_list arg)
{
	t_int64 n;

	n = va_arg(arg, ssize_t);
	return (n);
}
