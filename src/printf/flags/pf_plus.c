#include "ft_printf.h"

char	*pf_plus(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	flags->tags.plus = 1;
	return (format + 1);
}
