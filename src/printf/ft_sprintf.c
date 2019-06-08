#include "ft_printf.h"

int	ft_sprintf(char *str, char *format, ...)
{
	va_list	arg;
	int		done;

	va_start(arg, format);
	done = ft_vsprintf(str, format, arg);
	va_end(arg);
	return (done);
}
