#include "ft_printf.h"

int		pf_maj_o(va_list arg, t_pfflags *flags)
{
	flags->type = L;
	pf_o(arg, flags);
	return (0);
}
