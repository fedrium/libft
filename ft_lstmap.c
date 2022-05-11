#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		res = ft_lstnew(f(lst->content));
		ft_lstdelone(lst->content);
		lst = lst->next;
	}
	res->next = NULL;
	return (res);
}