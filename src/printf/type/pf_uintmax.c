#include "ft_printf.h"

t_uint64	pf_uintmax(va_list arg)
{
	t_uint64 n;

	n = va_arg(arg, uintmax_t);
	return (n);
}
