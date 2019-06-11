/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 20:37:47 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/12 00:47:39 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H

# include <stdlib.h>
# include "type.h"

typedef struct s_vec	t_vec;

struct	s_vec
{
	void		*data;
	t_uint64	size;
	t_uint8		capacity;
	t_uint8		bytes;
};

t_vec	*vec_new(void *data, t_uint64 size, t_uint8 bytes);
void	vec_clear(t_vec *vec);
void	vec_delete(t_vec **vec);

#endif
