#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*buf;

	list = *lst;
	while (list)
	{
		del(list->content);
		buf = list;
		list = list->next;
		free(buf);
	}
	*lst = 0;
}