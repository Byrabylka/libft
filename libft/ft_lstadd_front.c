#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_begin;

	if (*lst)
	{
		new_begin = new;
		new_begin->next = *lst;
		*lst = new_begin;
	}
	else
		*lst = new;
}