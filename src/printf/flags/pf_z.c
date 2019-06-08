#include "ft_printf.h"

char	*pf_z(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	flags->type = Z;
	return (format + 1);
}
