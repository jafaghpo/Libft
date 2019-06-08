#include "conv.h"
#include "char.h"

int		ft_tolower(int c)
{
	return (c + 32 * ft_isupper(c));
}
