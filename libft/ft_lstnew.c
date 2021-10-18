#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *elem;

	elem = (t_list *)malloc(sizeof(*elem));
	if (!elem)
		return (0);
	elem->next = 0;
	elem->content = content;
	return (elem);
}