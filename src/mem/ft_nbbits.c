/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:59:00 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 18:59:00 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

int		ft_nbbits(unsigned long long int nb)
{
	int		i;

	i = 0;
	while (nb >> i)
		i++;
	return (i);
}