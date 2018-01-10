#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_llst		*rev_file;
	t_sgraph	*pt_sgraph;
	t_pathfinder	*pt_map;
	t_llst		*current_node;
	t_llst		*current_node_path;

	file = read_file(0);
	rev_file = llst_rev(file);
	pt_sgraph = sgraph_build(file, rev_file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	store_all_paths(pt_map);
	current_node = pt_map->paths;
	while (current_node != NULL)
	{
		printf("path:");
		current_node_path = (t_llst *)current_node->value;
		while (current_node_path != NULL)
		{
			printf(" %s", (pt_map->pt_sgraph->keys)[*(int *)(current_node_path->value)]);
			current_node_path = current_node_path->next;
		}
		printf("\n");
		current_node = current_node->next;
	}

	sgraph_destroy(&pt_sgraph);
	llst_del(&rev_file);
	llst_del(&file);
	return (0);
}
