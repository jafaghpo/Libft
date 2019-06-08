#include "lst.h"
#include <unistd.h>

void	ft_lstaddlast(t_list **lst, t_list *add)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = add;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;
}
