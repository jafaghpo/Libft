#include "char.h"

int		ft_isblank(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
