/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 20:40:59 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 20:40:59 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*list_map(t_list *list, t_link *(*f)(t_link *))
{
	t_list	*new_list;
	t_link	*iter;

	new_list = list_new(NULL, 0);
	if (new_list == NULL)
		return (NULL);
	iter = list->first;
	while (iter)
	{
		list_push_last(new_list, f(iter));
		iter = iter->next;
	}
	return (new_list);
}
