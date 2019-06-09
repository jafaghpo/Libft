/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 19:04:23 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 19:04:24 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pf_u(va_list arg, t_pfflags *flags)
{
	char	str[20];
	t_int64	n;
	int		size;

	n = g_pf_utype[flags->type](arg);
	size = pf_uitoa_base(str, n, 10, 0);
	flags->prec -= size;
	flags->prec *= (flags->prec <= INT_MAX);
	flags->blank -= size + flags->prec;
	flags->blank *= (flags->blank <= INT_MAX);
	if (!flags->tags.minus)
	{
		pf_fill(flags->blank, ' ' + ('0' - ' ') * flags->tags.zero);
		pf_fill(flags->prec, '0');
		g_pf_buff(str, size);
	}
	else
	{
		pf_fill(flags->prec, '0');
		g_pf_buff(str, size);
		pf_fill(flags->blank, ' ');
	}
	return (size + flags->prec + flags->blank);
}
