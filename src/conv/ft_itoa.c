/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:57:47 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 18:57:47 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv.h"
#include <stdlib.h>

static int	ft_if(int *n, int *len)
{
	if (*n == -2147483648)
	{
		*n = 147483648;
		return (2);
	}
	if (*n < 0)
	{
		*len += 1;
		*n *= -1;
		return (1);
	}
	return (0);
}

static void	ft_start_tmp(int i, char *tmp)
{
	if (i == 2 || i == 1)
		tmp[0] = '-';
	if (i == 2)
		tmp[1] = '2';
}

char		*ft_itoa(int n)
{
	char	*tmp;
	int		size;
	int		i;
	int		len;

	size = 1;
	len = 1;
	i = ft_if(&n, &len);
	while (size <= n / 10)
	{
		size *= 10;
		len++;
	}
	if (!(tmp = (char *)malloc(sizeof(*tmp) * len + 1)))
		return (NULL);
	ft_start_tmp(i, tmp);
	while (size > 0)
	{
		tmp[i] = n / size + '0';
		n %= size;
		size /= 10;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
