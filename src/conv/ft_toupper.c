#include "conv.h"
#include "char.h"

int		ft_toupper(int c)
{
	return (c - 32 * ft_islower(c));
}
