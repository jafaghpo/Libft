#include "ft_printf.h"

int		pf_per(va_list arg, t_pfflags *flags)
{
	(void)arg;
	(void)flags;
	g_pf_buff("%", 1);
	return (1);
}
