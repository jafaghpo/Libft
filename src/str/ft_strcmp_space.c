#include "str.h"

int		ft_strcmp_space(char *s1, char *s2)
{
	ft_delspace(&s1);
	ft_delspace(&s2);
	while (*s1 == *s2 && *s1 != ' ' && *s1 != '\t' && *s1)
	{
		s1++;
		s2++;
	}
	ft_delspace(&s1);
	ft_delspace(&s2);
	return (!s1 && !s2);
}
