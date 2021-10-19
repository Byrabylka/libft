#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*elem;

	if (!lst || !f)
		return (0);
	if(!(elem = ft_lstnew(lst->content)))
	{
		ft_lstclear(&lst, del);
		return (0);
	}
	list = elem;
	lst = lst->next;
	while (lst)
	{
		if (!(elem = ft_lstnew(lst->content)))
		{
			ft_lstclear(&lst,del);
			return (0);
		}
	}
	
}