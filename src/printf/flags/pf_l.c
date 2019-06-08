#include "ft_printf.h"

char	*pf_l(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	if (flags->type == L)
		flags->type = LL;
	else
		flags->type = L;
	return (format + 1);
}
