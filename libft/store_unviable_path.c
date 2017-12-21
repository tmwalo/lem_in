#include "libft.h"

int	store_unviable_path(t_llst **pt_begin, t_llst *path_x, t_llst *path_y)
{
	t_llst	*new_node;

	if (!pt_begin || !path_x || !path_y)
		return (0);
	new_node = llst_new_empty();
	if (new_node == NULL)
	{
		llst_del(pt_begin);
		return (0);
	}
	if (llst_len(path_x) <= llst_len(path_y))
		new_node->value = path_y;
	else
		new_node->value = path_x;
	llst_add(pt_begin, new_node);
	return (1);
}
