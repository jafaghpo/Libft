#include "str.h"
#include "char.h"

char	*ft_strupper(char *str)
{
	char	*ret;

	ret = str;
	while (*str)
	{
		if (ft_islower(*str))
			*str -= 32;
		str++;
	}
	return (ret);
}
