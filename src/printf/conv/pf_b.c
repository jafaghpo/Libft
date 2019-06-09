/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 19:03:03 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 19:03:04 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pf_put_b(t_pfflags *flags, int size, int test, char *str)
{
	if (!flags->tags.minus)
	{
		if (!flags->tags.zero)
		{
			pf_fill(flags->blank, ' ');
			test ? g_pf_buff("0b", 2) : 1;
			pf_fill(flags->prec, '0');
			g_pf_buff(str, size);
		}
		else
		{
			if (test)
				g_pf_buff("0b", 2);
			pf_fill(flags->blank + flags->prec, '0');
			g_pf_buff(str, size);
		}
	}
	else
	{
		if (test)
			g_pf_buff("0b", 2);
		pf_fill(flags->prec, '0');
		g_pf_buff(str, size);
		pf_fill(flags->blank, ' ');
	}
}

int			pf_b(va_list arg, t_pfflags *flags)
{
	char		str[70];
	t_int64		n;
	int			size;
	int			test;

	n = g_pf_utype[flags->type](arg);
	size = pf_uitoa_base(str, n, 2, 0);
	test = flags->tags.hashtag * 2;
	flags->prec -= size + test;
	flags->prec *= (flags->prec <= INT_MAX);
	flags->blank -= size + test + flags->prec;
	flags->blank *= (flags->blank <= INT_MAX);
	pf_put_b(flags, size, test, str);
	return (size + flags->prec + flags->blank + test);
}
