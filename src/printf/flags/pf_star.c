#include "ft_printf.h"

char	*pf_star(char *format, va_list arg, t_pfflags *flags)
{
	if (*(format - 1) == '.')
	{
		flags->prec = va_arg(arg, t_uint32);
		flags->tags.prec = 1;
	}
	else
		flags->blank = va_arg(arg, t_uint32);
	return (format + 1);
}
