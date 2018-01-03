#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst			*file;
	t_sgraph		*pt_sgraph;
	t_pathfinder	*pt_map;
	int				start;
	int				end;
	t_llst			*current_node;
	t_llst			*paths;
	t_llst			*pt_unviable_path;

	file = read_file(0);
	pt_sgraph = sgraph_build(file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	start = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->start);
	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	all_paths(pt_map, start, end);
	pt_unviable_path = NULL;
	paths = pt_map->paths;
	unviable_path(&pt_unviable_path, paths->value, paths->next->value);
	current_node = pt_unviable_path->value;
	printf("unviable path:");
	while (current_node != NULL)
	{
		printf(" %s", (pt_map->pt_sgraph->keys)[*(int *)(current_node->value)]);
		current_node = current_node->next;
	}
	printf("\n");

	sgraph_destroy(&pt_sgraph);
	llst_del(&file);
	return (0);
}
