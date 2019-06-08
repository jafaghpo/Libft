#include "lst.h"
#include <unistd.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*new_list;

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
