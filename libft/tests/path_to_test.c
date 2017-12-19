#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_sgraph	*pt_sgraph;
	t_pathfinder	*pt_map;
	t_llst		*path;
	t_llst		*current_node;
	int		end;

	file = read_file(0);
	pt_sgraph = sgraph_build(file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	(pt_map->visited)[1] = 1;
	(pt_map->edge_to)[1] = 1;
	(pt_map->visited)[2] = 1;
	(pt_map->edge_to)[2] = 1;
	(pt_map->visited)[0] = 2;
	(pt_map->edge_to)[0] = 2;

	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	path = path_to(pt_map, end);
	current_node = path;
	printf("path:");
	while (current_node != NULL)
	{
		printf(" %d", *(int *)current_node->value);
		current_node = current_node->next;
	}
	printf("\n");

	sgraph_destroy(&pt_sgraph);
	llst_del(&file);
	return (0);
}
