/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:57:25 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 18:57:25 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
