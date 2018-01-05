#include "libft.h"

void	init_occupied(t_sgraph *pt_sgraph, int *occupied)
{
	int	total_ants;
	int	total_rooms;
	int	start;
	int	index;

	if (!pt_sgraph || !(pt_sgraph->pt_graph) || !occupied)
		return ;
	total_ants = pt_sgraph->num_ants;
	total_rooms = pt_sgraph->pt_graph->vertices;
	start = *(int *)st_get(pt_sgraph->st_begin, pt_sgraph->start);
	index = 0;
	while (total_rooms > 0)
	{
		if (index != start)
			*occupied = 0;
		else
			*occupied = total_ants;
		++occupied;
		++index;
		--total_rooms;
	}
}
