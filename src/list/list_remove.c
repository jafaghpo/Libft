/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: john <john@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:42:07 by john              #+#    #+#             */
/*   Updated: 2019/06/10 17:15:04 by john             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_link	*link_remove(t_link *link)
{
	t_link	*prev;
	t_link	*next;

	prev = link->prev;
	next = link->next;
	prev->next = next;
	next->prev = prev;
	link->prev = NULL;
	link->next = NULL;
	return (link);
}

t_link	*list_remove(t_list *list, t_uint64 index)
{
	t_link	*link;

	link = list_get(list, index);
	if (link == NULL)
		return (NULL);
	link = link_remove(link);
	return (link);
}