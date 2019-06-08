#include "ft_printf.h"

int		ft_dprintf(int fd, char *format, ...)
{
	va_list arg;
	int		done;

	va_start(arg, format);
	done = ft_vdprintf(fd, format, arg);
	va_end(arg);
	return (done);
}
