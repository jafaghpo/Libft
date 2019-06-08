#include "str.h"

void	ft_delspace(char **str)
{
	while (**str == ' ' || **str == '\t')
		(*str)++;
}
