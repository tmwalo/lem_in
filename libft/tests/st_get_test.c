#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*pt_begin;
	t_llst		*current_node;
	t_st_node	*st_node;
	void		*ret;
	int		value;

	pt_begin = NULL;
	st_put(&pt_begin, "cactus", 10);
	st_put(&pt_begin, "moonlight", 81);
	st_put(&pt_begin, "capture the gods", 999);

	current_node = pt_begin;
	while (current_node)
	{
		st_node = (t_st_node *)current_node->value;
		printf("key: %s, value: %d\n", (char *)(st_node->key), *(int *)(st_node->value));
		current_node = current_node->next;
	}

	ret = st_get(pt_begin, "cool");
	printf("%s\n", (ret == NULL) ? "PASS" : "FAIL");

	ret = st_get(pt_begin, "cactus");
	value = *(int *)ret;
	printf("%s%d\n", (ret) ? "PASS: " : "FAIL", value);

	return (0);
}
