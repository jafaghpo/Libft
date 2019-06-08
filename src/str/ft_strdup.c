#include "str.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	i;

	if (!(tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = ((char *)s)[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
