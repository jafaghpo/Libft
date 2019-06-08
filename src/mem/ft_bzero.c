#include "mem.h"
#include "type.h"

void	ft_bzero(void *s, size_t n)
{
	while (n > 8)
	{
		*(t_uint64 *)s = 0;
		s += 8;
		n -= 8;
	}
	while (n > 0)
	{
		*(t_uint8 *)s = 0;
		s++;
		n--;
	}
}
