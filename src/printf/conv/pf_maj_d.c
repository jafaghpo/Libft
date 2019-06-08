#include "ft_printf.h"

int		pf_maj_d(va_list arg, t_pfflags *flags)
{
	flags->type = L;
	pf_d(arg, flags);
	return (0);
}
