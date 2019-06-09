/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_2long.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 19:06:11 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 19:06:11 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_int64	pf_2long(va_list arg)
{
	t_int64 n;

	n = va_arg(arg, t_int64);
	return (n);
}
