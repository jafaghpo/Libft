#include "ft_printf.h"

void	pf_fill(int size, char octet)
{
	char	tab[size];

	ft_memset(tab, octet, size);
	g_pf_buff(tab, size);
}
