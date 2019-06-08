#include "char.h"

int		ft_ispunct(int c)
{
	if (ft_isprint(c) && !(ft_isalnum(c) || c == ' '))
		return (1);
	return (0);
}
