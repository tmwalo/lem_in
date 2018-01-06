#include "libft.h"

void	move_ants(t_pathfinder *map)
{
	t_ant	ants[(map->pt_sgraph->num_ants)];
	int	occupied[(map->pt_sgraph->pt_graph->vertices)];
	int	end;
	int	index;

	init_ants(map, ants);
	init_occupied(map->pt_sgraph, occupied);
	end = *(int *)st_get(map->pt_sgraph->st_begin, map->pt_sgraph->end);
	while (occupied[end] != map->pt_sgraph->num_ants)
	{
		index = 0;
		while (index < map->pt_sgraph->num_ants)
		{
			if (*(int *)((ants[index]).current_room)->value != end)
			{
				if (next_free_or_end(ants[index], occupied, end))
				{
					move_ant(ants, occupied, index);
					print_ant_pos(map, ants, index);
				}
			}
			++index;
		}
		ft_putstr("\n");
	}
}
