#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst			*file;
	t_sgraph		*pt_sgraph;
	t_pathfinder	*pt_map;
	int				start;
	int				end;
	t_llst			*unviable_paths_ll;
	t_llst		*current_node;
	t_llst		*current_node_path;


	file = read_file(0);
	pt_sgraph = sgraph_build(file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	start = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->start);
	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	all_paths(pt_map, start, end);
	unviable_paths_ll = unviable_paths(pt_map->paths, start, end);
	current_node = unviable_paths_ll;
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
	llst_del(&file);
	return (0);
}
