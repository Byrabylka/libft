#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*list;

	list = lst;
	del(list->content);
	free(list);
}