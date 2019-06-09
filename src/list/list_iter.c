/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_iter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:24:40 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 00:02:57 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_iter(t_list *list, void (*f)(t_link *))
{
	t_link	*iter;

	iter = list->first;
	while (iter)
	{
		(*f)(iter);
		iter = iter->next;
	}
}