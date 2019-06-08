#include "ft_printf.h"

char	*pf_zero(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	flags->tags.zero = 1;
	return (format + 1);
}
