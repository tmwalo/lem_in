#include "libft.h"

void	path_delete(t_llst **paths, t_llst *path_key)
{
	t_llst	*prev;
	t_llst	*temp;

	if (!paths || !(*paths) || !path_key)
		return ;
	if ((*paths)->value == path_key)
	{
		temp = (*paths)->next;
		llst_del((t_llst **)(&((*paths)->value)));
		ft_memdel((void **)paths);
		*paths = temp;
		return ;
	}
	while ((*paths != NULL) && ((*paths)->value != path_key))
	{
		prev = *paths;
		*paths = (*paths)->next;
	}
	if (*paths == NULL)
		return ;
	prev->next = (*paths)->next;
	llst_del((t_llst **)(&((*paths)->value)));
	ft_memdel((void **)(&(*paths)));
}
