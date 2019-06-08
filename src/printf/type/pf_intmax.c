#include "ft_printf.h"

t_int64	pf_intmax(va_list arg)
{
	t_int64 n;

	n = va_arg(arg, intmax_t);
	return (n);
}
