#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_sgraph	*pt_sgraph;
	t_pathfinder	*pt_map;
	t_ant		ants[13];
	int		total_ants;
	int		start;
	int		end;
	int		index;

	file = read_file(0);
	pt_sgraph = sgraph_build(file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);
	start = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->start);
	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	all_paths(pt_map, start, end);
	viable_paths(&(pt_map->paths), start, end);

	init_ants(pt_map, ants);
	total_ants = pt_map->pt_sgraph->num_ants;
	index = 0;
	while (total_ants > 0)
	{
		printf("index: %d, path: %p, current_path: %p, arrived: %d\n", index, (ants[index]).path, (ants[index]).current_room, (ants[index]).arrived);
		++index;
		--total_ants;
	}

	sgraph_destroy(&pt_sgraph);
	llst_del(&file);
	return (0);
}
