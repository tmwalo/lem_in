#include "libft.h"

int	validate_graph_file(t_llst *begin_ll)
{
	t_llst	*current_node;
	int	ret;

	if (begin_ll == NULL)
		return (0);
	current_node = begin_ll;
	while (current_node != NULL)
	{
		ret = validate_graph_input((char *)current_node->value);
		if (ret == 0)
			return (0);
		current_node = current_node->next;
	}
	return (1);
}
