#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*pt_begin;
	t_llst		*current_node;
	t_st_node	*st_node;

	pt_begin = NULL;
	st_put(&pt_begin, "cactus", 10);
	st_put(&pt_begin, "moonlight", 8);
	current_node = pt_begin;
	while (current_node)
	{
		st_node = (t_st_node *)current_node->value;
		printf("key: %s, value: %d\n", (char *)(st_node->key), *(int *)(st_node->value));
		current_node = current_node->next;
	}
	return (0);
}
