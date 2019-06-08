#include "ft_printf.h"

t_uint64	pf_uint(va_list arg)
{
	t_uint64 n;

	n = va_arg(arg, t_uint32);
	return (n);
}
