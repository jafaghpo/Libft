#include "ft_printf.h"

t_uint64	pf_size(va_list arg)
{
	t_uint64 n;

	n = va_arg(arg, size_t);
	return (n);
}
