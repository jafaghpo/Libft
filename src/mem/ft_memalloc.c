#include "mem.h"
#include <stdlib.h>

void	*ft_memalloc(size_t n)
{
	void	*tmp;

	if (!(tmp = malloc(n)))
		return (NULL);
	ft_bzero(tmp, n);
	return (tmp);
}
