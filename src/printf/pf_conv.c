#include "ft_printf.h"

int	pf_conv(char **format, va_list arg)
{
	t_pfflags	flags;

	(*format)++;
	ft_bzero(&flags, sizeof(flags));
	flags.type = ND;
	*format = pf_tags(*format, arg, &flags);
	return (pf_arg(**format, arg, &flags));
}
