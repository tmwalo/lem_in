#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*file;
	t_llst	*current_node;
	int	ret;

	file = read_file(0);
	current_node = file;
	while (current_node)
	{
		ret = validate_graph_input((char *)current_node->value);
		ft_putstr((char *)current_node->value);
		printf(", ret: %d\n\n", ret);
		current_node = current_node->next;
	}
	llst_del(&file);
	return (0);
}
