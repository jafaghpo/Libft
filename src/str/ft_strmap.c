#include "str.h"
#include <stdlib.h>

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = (*f)(s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
