#include "libft.h"

int	main(void)
{
	t_llst	*file;
	t_llst	*current_node;

	file = read_file(0);
	current_node = file;
	while (current_node)
	{
		ft_putendl((char *)current_node->value);
		current_node = current_node->next;
	}
	llst_del(&file);
	return (0);
}
