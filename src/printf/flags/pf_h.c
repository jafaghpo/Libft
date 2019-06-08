#include "ft_printf.h"

char	*pf_h(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	if (flags->type == H)
		flags->type = HH;
	else
		flags->type = H;
	return (format + 1);
}
