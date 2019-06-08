#include "str.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s + ft_strlen(s);
	while (tmp >= (char *)s)
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
