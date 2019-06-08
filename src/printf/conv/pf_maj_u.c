#include "ft_printf.h"

int		pf_maj_u(va_list arg, t_pfflags *flags)
{
	flags->type = L;
	pf_u(arg, flags);
	return (0);
}
