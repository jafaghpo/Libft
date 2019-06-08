#include "str.h"

wchar_t	*ft_wstrcpy(wchar_t *dest, const wchar_t *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
