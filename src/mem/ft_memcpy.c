#include "mem.h"
#include "type.h"

void	ft_memcpy(void *dest, void *src, int len)
{
	while (len >= 8)
	{
		*((t_uint64 *)dest) = *((t_uint64 *)src);
		dest = (void *)((t_uint64 *)dest + 1);
		src = (void *)((t_uint64 *)src + 1);
		len -= 8;
	}
	while (len > 0)
	{
		*((t_uint8 *)dest) = *((t_uint8 *)src);
		dest = (void *)((t_uint8 *)dest + 1);
		src = (void *)((t_uint8 *)src + 1);
		len -= 1;
	}
}
