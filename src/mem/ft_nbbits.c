#include "mem.h"

int		ft_nbbits(unsigned long long int nb)
{
	int		i;

	i = 0;
	while (nb >> i)
		i++;
	return (i);
}
