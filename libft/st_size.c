#include "libft.h"

int	st_size(t_llst *begin)
{
	t_llst 		*current_node;
	int		size;

	size = 0;
	current_node = begin;
	while (current_node != NULL)
	{
		++size;
		current_node = current_node->next;
	}
	return (size);
}
