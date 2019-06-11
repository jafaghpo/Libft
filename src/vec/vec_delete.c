/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 00:06:09 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/12 00:46:52 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_delete(t_vec **vec)
{
	free((*vec)->data);
	(*vec)->data = NULL;
	(*vec)->size = 0;
	(*vec)->capacity = 0;
	free(*vec);
	*vec = NULL;
}
