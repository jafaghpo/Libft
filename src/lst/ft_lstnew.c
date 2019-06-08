#include "lst.h"
#include "mem.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = (t_list *)malloc(sizeof(*tmp))))
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
