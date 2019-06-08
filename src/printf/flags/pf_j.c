#include "ft_printf.h"

char	*pf_j(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	flags->type = J;
	return (format + 1);
}
