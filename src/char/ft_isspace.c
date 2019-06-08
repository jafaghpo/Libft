#include "char.h"

int		ft_isspace(int c)
{
	return ((c == ' ') || (c >= '\t' && c <= '\r'));
}
