#include "ft_printf.h"

void		(*g_pf_buff)(char *, int);
t_uint64	(*g_pf_utype[7])(va_list) =
{
	pf_ushort,
	pf_u2short,
	pf_ulong,
	pf_u2long,
	pf_uintmax,
	pf_size,
	pf_uint
};

t_int64		(*g_pf_type[7])(va_list) =
{
	pf_short,
	pf_2short,
	pf_long,
	pf_2long,
	pf_intmax,
	pf_ssize,
	pf_int
};
