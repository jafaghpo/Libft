/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:56:49 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/10 21:43:44 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H

# include <string.h>
# include "type.h"

typedef struct s_lst	t_lst;

struct	s_lst
{
	void		*content;
	t_lst		*next;
	size_t		content_size;
};

t_lst	*ft_lstnew(void *content, size_t content_size);
void	ft_lstdelone(t_lst **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_lst **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_lst **alst, t_lst *new);
void	ft_lstiter(t_lst *lst, void (*f)(t_lst *elem));
t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
void	ft_lstaddlast(t_lst **lst, t_lst *add);

#endif
