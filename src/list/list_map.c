/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:29:38 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/09 23:58:35 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*list_map(t_list *list, t_link *(*f)(t_link *))
{
	t_list	*new_list;
	t_link	*iter;

	if (!list || !f)
		return (NULL);
	new_list = list_new(NULL, 0);
	iter = list->first;
	while (iter)
	{
		list_push_last(new_list, f(iter));
		iter = iter->next;
	}
	return (new_list);
}