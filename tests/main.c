/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 19:16:36 by jafaghpo          #+#    #+#             */
/*   Updated: 2019/06/11 00:52:29 by jafaghpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_link(t_link *link)
{
	ft_printf("\"%s\"\n", (char*)(link->data));
}

bool	size_lt_12(t_link *link)
{
	return (link->size < 12);
}

int		main(int ac, char **av)
{
	t_list	*list;
	t_list	*filtered;

	list = list_new(NULL, 0);
	ft_printf("Adding elem to list:\n");
	list_push_last(list, link_new(ft_strdup("push last 1"), 11));
	list_push_first(list, link_new(ft_strdup("push first 1"), 12));
	list_push_first(list, link_new(ft_strdup("push first 2"), 12));
	list_push_first(list, link_new(ft_strdup("push first 3"), 12));
	list_push_last(list, link_new(ft_strdup("push last 2"), 11));
	list_insert(list, link_new(ft_strdup("insert at index 1"), 17), 1);
	list_push_last(list, link_new(ft_strdup("push last 3"), 11));
	list_iter(list, print_link);
	ft_printf("\nLength of list: %d\n", list->length);
	ft_printf("\nGetting elem at index:\n");
	print_link(list_get(list, 3));
	ft_printf("\nFilter elem with a size lower than 12:\n");
	filtered = list_filter(list, size_lt_12);
	list_iter(filtered, print_link);
	ft_printf("\nPop first elem: ");
	print_link(list_pop_first(list));
	list_iter(list, print_link);
	ft_printf("\nPop last elem: ");
	print_link(list_pop_last(list));
	list_iter(list, print_link);
	ft_printf("\nRemove elem at index 2: ");
	print_link(list_remove(list, 2));
	list_iter(list, print_link);
	// ft_printf("\nDelete list:\n");
	// list_delete(&list);
	// list_delete(&filtered);
	// list_iter(list, print_link);
	return (0);
}