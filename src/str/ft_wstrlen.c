#include "str.h"

static int	ft_sizechar(wchar_t c)
{
	if (!(c >> 7))
		return (1);
	if (!(c >> 11))
		return (2);
	if (!(c >> 16))
		return (3);
	return (4);
}

size_t		ft_wstrlen(wchar_t *str)
{
	size_t		size;

	size = 0;
	while (*str)
	{
		size += ft_sizechar(*str);
		str++;
	}
	return (size);
}
