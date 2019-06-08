#include "conv.h"
#include "char.h"

int		ft_atoi(const char *str)
{
	int		neg;
	int		nb;

	nb = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	neg = 1;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		nb = nb * 10 - '0' + *str;
		str++;
	}
	return (nb * neg);
}
