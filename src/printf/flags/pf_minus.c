#include "ft_printf.h"

char	*pf_minus(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	flags->tags.minus = 1;
	return (format + 1);
}
