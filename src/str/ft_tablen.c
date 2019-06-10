/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 19:33:56 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 20:41:52 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

size_t		ft_tablen(char **tab)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (tab[i])
		count += ft_strlen(tab[i++]);
	return (count);
}
