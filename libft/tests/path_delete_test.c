#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst			*file;
	t_llst			*rev_file;
	t_sgraph		*pt_sgraph;
	t_pathfinder	*pt_map;
	int				start;
	int				end;
	t_llst			*unviable_paths_ll;
	t_llst		*current_node;
	t_llst		*next_node;
	t_llst		*current_node_path;


	file = read_file(0);
	rev_file = llst_rev(file);
	pt_sgraph = sgraph_build(file, rev_file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	start = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->start);
	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	all_paths(pt_map, start, end);
	unviable_paths_ll = unviable_paths(pt_map->paths, start, end);
	current_node = unviable_paths_ll;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		printf("path:");
		current_node_path = (t_llst *)current_node->value;
		while (current_node_path != NULL)
		{
			printf(" %s", (pt_map->pt_sgraph->keys)[*(int *)(current_node_path->value)]);
			current_node_path = current_node_path->next;
		}
		printf("\n");
		path_delete(&(pt_map->paths), current_node_path);
		current_node = next_node;
	}

	llst_del_nodes(&unviable_paths_ll);
	pathfinder_destroy(&pt_map);
	llst_del(&rev_file);
	llst_del(&file);
	return (0);
}
