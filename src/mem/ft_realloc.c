#include "mem.h"
#include "put.h"
#include <stdlib.h>

void	*ft_realloc(void *data, size_t size)
{
	void	*tmp;

	if (!(tmp = malloc(size)))
		ft_error("error malloc in ft_realloc");
	if (!data)
		return (tmp);
	ft_memmove(tmp, data, size);
	free(data);
	return (tmp);
}
