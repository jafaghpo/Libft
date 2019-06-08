#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	va_list	arg;
	int		done;

	va_start(arg, format);
	done = ft_vprintf(format, arg);
	va_end(arg);
	return (done);
}
