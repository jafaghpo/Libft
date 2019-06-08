#include "str.h"

int		ft_sizestr(char *str)
{
	int		ret;

	ret = 0;
	while (*str)
	{
		ret += *str;
		str++;
	}
	return (ret);
}
