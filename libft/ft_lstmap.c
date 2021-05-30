#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;

	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		tmp->next = lst->next;
		lst = lst->next;
	}
}
