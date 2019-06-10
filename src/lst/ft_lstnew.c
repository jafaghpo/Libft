/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:58:27 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 21:42:46 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"
#include "mem.h"
#include <stdlib.h>

t_lst	*ft_lstnew(void *content, size_t content_size)
{
	t_lst	*tmp;

	if (!(tmp = (t_lst *)malloc(sizeof(*tmp))))
		return (NULL);
	if (content == NULL)
	{
		tmp->content_size = 0;
		tmp->content = NULL;
	}
	else
	{
		tmp->content_size = content_size;
		if (!(tmp->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(tmp->content, (void*)content, content_size);
	}
	tmp->next = NULL;
	return (tmp);
}
