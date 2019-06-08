#include "lst.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *))
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		(*f)(lst);
		lst = tmp;
	}
}
