#include "libft.h"

void	path_delete(t_llst **paths, t_llst *path_key)
{
	t_llst	*prev;
	t_llst	*temp;
	t_llst	*current_node;

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
	current_node = *paths;
	while ((current_node != NULL) && (current_node->value != path_key))
	{
		prev = current_node;
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return ;
	prev->next = current_node->next;
	llst_del((t_llst **)(&(current_node->value)));
	ft_memdel((void **)(&current_node));
}
