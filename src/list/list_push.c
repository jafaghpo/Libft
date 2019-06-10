/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 20:41:25 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 23:41:23 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_push_first(t_list *list, t_link *new)
{
	if (!list->first)
	{
		list->first = new;
		list->last = new;
	}
	else
	{
		new->next = list->first;
		list->first->prev = new;
		list->first = new;
	}
	list->length += 1;
}

void	list_push_last(t_list *list, t_link *new)
{
	if (!list->last)
	{
		list->first = new;
		list->last = new;
	}
	else
	{
		new->prev = list->last;
		list->last->next = new;
		list->last = new;
	}
	list->length += 1;
}
