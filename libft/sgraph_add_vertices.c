#include "libft.h"

int	sgraph_add_vertices(t_llst *file, t_sgraph *pt_sgraph)
{
	t_llst	*current_node;
	char	*line;
	int	ret;

	if ((file == NULL) || (pt_sgraph == NULL))
		return (0);
	current_node = file;
	while (current_node != NULL)
	{
		line = (char *)current_node->value;
		if (ft_isvertex(line))
		{
			ret = sgraph_add_vertex(pt_sgraph, line);
			if (ret == 0)
				return (0);
		}
		current_node = current_node->next;
	}
	return (1);
}
