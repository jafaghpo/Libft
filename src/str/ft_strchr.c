#include "str.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	if (c == '\0')
		return (tmp);
	return (NULL);
}
