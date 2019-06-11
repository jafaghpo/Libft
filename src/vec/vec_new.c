/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 22:01:54 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/12 00:46:49 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include "mem.h"

static t_uint8	next_power_of_2(t_uint64 num)
{
	t_uint8		n;

	n = 0;
	while ((1 << n) < num)
		n++;
	return (n);
}

t_vec			*vec_new(void *data, t_uint64 size, t_uint8 bytes)
{
	t_vec		*new;
	t_uint64	capacity;

	if (!(new = (t_vec *)ft_memalloc(sizeof(*new))))
		return (NULL);
	if (data == NULL)
		return (new);
	capacity = next_power_of_2(size);
	if (!(new->data = ft_memalloc(capacity)))
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	new->capacity = capacity;
	new->bytes = bytes;
	ft_memcpy(new->data, data, size);
	return (new);
}
