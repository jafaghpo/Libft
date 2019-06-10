/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:58:14 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 21:41:57 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include <unistd.h>

void	ft_lstaddlast(t_lst **lst, t_lst *add)
{
	t_lst	*tmp;

	if (*lst == NULL)
	{
		*lst = add;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;
}
