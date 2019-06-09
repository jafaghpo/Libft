/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 00:54:30 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 01:02:35 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_link	*list_get(t_list *list, t_uint64 index)
{
	t_link		*iter;
	t_uint64	i;

	i = 0;
	iter = list->first;
	if (index >= list->length)
		return (NULL);
	while (i < index)
	{
		iter = iter->next;
		i++;
	}
	return (iter);
}