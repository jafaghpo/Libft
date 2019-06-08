#include "ft_printf.h"

int		pf_maj_i(va_list arg, t_pfflags *flags)
{
	pf_maj_d(arg, flags);
	return (0);
}
