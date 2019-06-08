#include "str.h"
#include "mem.h"
#include <stdlib.h>

char	*ft_strnew(size_t n)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(*tmp) * (n + 1))))
		return (NULL);
	ft_bzero((void *)tmp, n + 1);
	return (tmp);
}
