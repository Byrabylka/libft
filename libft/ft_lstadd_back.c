#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_list;

	new_list = *lst;
	if (new_list)
	{
		while (new_list->next)
			new_list = new_list->next;
		new_list->next = new;
	}
	else
		*lst = new;
}