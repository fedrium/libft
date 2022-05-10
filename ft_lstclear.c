#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (*lst != '\0')
	{
		del((*lst)->content);
		free(*lst);
		*lst = (*lst)->next;
	}
}