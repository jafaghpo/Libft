/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:58:25 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 21:42:34 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include <unistd.h>

t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *))
{
	t_lst	*new_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		ft_lstaddlast(&new_list, f(lst));
		lst = lst->next;
	}
	return (new_list);
}
