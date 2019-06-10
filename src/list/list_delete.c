/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_delete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: john <john@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 00:27:18 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 17:10:09 by john             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	link_delete(t_link **link)
{
	t_link	*tmp;

	tmp = link_remove(*link);
	free(tmp->data);
	tmp->data = NULL;
	tmp->size = 0;
	free(tmp);
	tmp = NULL;
}

void	list_delete(t_list **list)
{
	t_link	*tmp;
	t_link	*iter;

	iter = (*list)->first;
	while (iter)
	{
		tmp = iter->next;
		link_delete(&iter);
		iter = tmp;
	}
	(*list)->length = 0;
	free(*list);
	*list = NULL;
}
