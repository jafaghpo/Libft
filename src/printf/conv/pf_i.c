#include "ft_printf.h"

int		pf_i(va_list arg, t_pfflags *flags)
{
	return (pf_d(arg, flags));
}
