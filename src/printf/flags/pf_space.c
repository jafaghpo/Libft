#include "ft_printf.h"

char	*pf_space(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	flags->tags.space = 1;
	return (format + 1);
}
