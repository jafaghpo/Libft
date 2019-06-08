#include "ft_printf.h"

t_uint64	pf_ushort(va_list arg)
{
	t_uint64	n;

	n = va_arg(arg, t_uint32);
	n = (t_uint16)n;
	return (n);
}
