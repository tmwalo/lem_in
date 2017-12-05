#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_sgraph	sgraph;
	t_sgraph	*pt_sgraph;
	int		ret1;
	int		ret2;
	int		ret3;
	int		ret4;
	int		ret5;
	int		ret6;
	int		ret7;
	t_llst		*current_node;
	t_st_node	*st_node;

	pt_sgraph = &sgraph;

	init_sgraph(pt_sgraph, 11, "three", "nine");

	ret1 = sgraph_add_vertex(pt_sgraph, NULL);
	ret2 = sgraph_add_vertex(pt_sgraph, "");
	ret3 = sgraph_add_vertex(pt_sgraph, "# comment");
	ret4 = sgraph_add_vertex(pt_sgraph, "125 343 676");
	ret5 = sgraph_add_vertex(pt_sgraph, "room56 26 76437");
	ret6 = sgraph_add_vertex(pt_sgraph, "11 54764 745");
	ret7 = sgraph_add_vertex(pt_sgraph, "11 54764 745");

	current_node = pt_sgraph->st_begin;
	while (current_node)
	{
		st_node = (t_st_node *)current_node->value;
		printf("key: %s, value: %d\n", (char *)(st_node->key), *(int *)(st_node->value));
		current_node = current_node->next;
	}

	printf("%s\n", (ret1 == 0) ? "PASS" : "FAIL");
	printf("%s\n", (ret2 == 0) ? "PASS" : "FAIL");
	printf("%s\n", (ret3 == 0) ? "PASS" : "FAIL");
	printf("%s\n", (ret4 == 1) ? "PASS" : "FAIL");
	printf("%s\n", (ret5 == 1) ? "PASS" : "FAIL");
	printf("%s\n", (ret6 == 1) ? "PASS" : "FAIL");
	printf("%s\n", (ret7 == 0) ? "PASS" : "FAIL");

	return (0);
}
