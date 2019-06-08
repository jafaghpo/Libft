#include "mem.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	size_t			i;

	if (dest < src)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	tmp = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	i = n;
	while (i > 0)
	{
		tmp2[i - 1] = tmp[i - 1];
		i--;
	}
	return (dest);
}
