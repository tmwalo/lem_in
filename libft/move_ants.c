#include "libft.h"

void	move_ants(t_pathfinder *map)
{
	t_ant	ants[(map->pt_sgraph->num_ants)];
	int	occupied[(map->pt_sgraph->pt_graph->vertices)];
	int	total_ants;
	int	end;
	int	index;

	init_ants(map, ants);
	init_occupied(map->pt_sgraph, occupied);
	total_ants = map->pt_sgraph->num_ants;
	end = *(int *)st_get(map->pt_sgraph->st_begin, map->pt_sgraph->end);
	index = 0;
	while (occupied[end] != total_ants)
	{
		while (total_ants > 0)
		{
			if (*(int *)((ants[index]).current_room)->value != end)
			{
				if (!occupied[(*(int *)(((ants[index]).current_room)->next)->value)] || ((*(int *)(((ants[index]).current_room)->next)->value) == end))
				{
					--(occupied[*(int *)((ants[index]).current_room)->value]);
					(ants[index]).current_room = ((ants[index]).current_room)->next;
					++(occupied[*(int *)((ants[index]).current_room)->value]);
					ft_putstr("L");
					ft_putnbr(index + 1);
					ft_putstr("-");
					ft_putstr((map->pt_sgraph->keys)[*(int *)((ants[index]).current_room)->value]);
					ft_putstr(" ");
				}
			}
			++index;
			--total_ants;
		}
		ft_putstr("\n");
		total_ants = map->pt_sgraph->num_ants;
		index = 0;
	}
}
