/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 19:04:15 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 19:04:15 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pf_put_p(t_pfflags *flags, int size, char *str)
{
	if (!flags->tags.minus)
	{
		if (!flags->tags.zero)
		{
			pf_fill(flags->blank, ' ');
			g_pf_buff("0x", 2);
			pf_fill(flags->prec, '0');
			g_pf_buff(str, size);
		}
		else
		{
			g_pf_buff("0x", 2);
			pf_fill(flags->blank + flags->prec, '0');
			g_pf_buff(str, size);
		}
	}
	else
	{
		g_pf_buff("0x", 2);
		pf_fill(flags->prec, '0');
		g_pf_buff(str, size);
		pf_fill(flags->blank, ' ');
	}
}

int			pf_p(va_list arg, t_pfflags *flags)
{
	char		str[20];
	t_int64		n;
	int			size;

	n = va_arg(arg, t_uint64);
	size = pf_uitoa_base(str, n, 16, 0);
	flags->prec -= size + 2;
	flags->prec *= (flags->prec <= INT_MAX);
	flags->blank -= size + 2 + flags->prec;
	flags->blank *= (flags->blank <= INT_MAX);
	pf_put_p(flags, size, str);
	return (size + flags->prec + flags->blank + 2);
}
