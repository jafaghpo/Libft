/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_implode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 19:13:56 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 20:41:58 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str.h"

char		*ft_implode(char **tab, char delim)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	index;

	len = ft_tablen(tab);
	if (!(str = (char*)malloc(len + ft_tabsize(tab))))
		return (NULL);
	i = 0;
	index = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			str[index++] = tab[i][j++];
		str[index++] = delim;
		i++;
	}
	str[index - 1] = 0;
	return (str);
}
