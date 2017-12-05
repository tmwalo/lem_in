#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*file;
	t_sgraph	sgraph;
	t_sgraph	*pt_sgraph;
	t_llst		*current_node;
	t_st_node	*st_node;
	int		ret;

	file = read_file(0);
	pt_sgraph = &sgraph;
	init_sgraph(pt_sgraph, 5, "three", "seven");
	
	ret = sgraph_add_vertices(NULL, pt_sgraph);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = sgraph_add_vertices(file, NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");
	
	ret = sgraph_add_vertices(file, pt_sgraph);
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	current_node = pt_sgraph->st_begin;
	while (current_node)
	{
		st_node = (t_st_node *)current_node->value;
		printf("key: %s, value: %d\n", (char *)(st_node->key), *(int *)(st_node->value));
		current_node = current_node->next;
	}
	llst_del(&file);
	return (0);
}
