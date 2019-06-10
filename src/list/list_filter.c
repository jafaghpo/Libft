/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_filter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: john <john@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:47:22 by john              #+#    #+#             */
/*   Updated: 2019/06/10 15:49:44 by john             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*list_filter(t_list *list, bool (*f)(t_link *))
{
	t_list	*new_list;
	t_link	*iter;

	new_list = list_new(NULL, 0);
	iter = list->first;
	while (iter)
	{
		if (f(iter))
			list_push_last(new_list, iter);
		iter = iter->next;
	}
	return (new_list);
}