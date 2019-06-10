/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: john <john@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:18:43 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 14:39:08 by john             ###   ########.fr       */
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
		list->first = new;
	}
	list->length += 1;
}

void	list_push_last(t_list *list, t_link *new)
{
	if (!list->first)
	{
		list->first = new;
		list->last = new;
	}
	else
	{
		new->next = list->last;
		list->last = new;
	}
	list->length += 1;
}
