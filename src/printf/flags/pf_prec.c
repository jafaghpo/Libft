#include "ft_printf.h"

char	*pf_prec(char *format, va_list arg, t_pfflags *flags)
{
	int		n;

	(void)arg;
	format++;
	n = 0;
	while (*format >= '0' && *format <= '9')
	{
		n = n * 10 + *format - '0';
		format++;
	}
	flags->prec = n;
	flags->tags.prec = 1;
	return (format);
}
