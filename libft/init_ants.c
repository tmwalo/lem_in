#include "libft.h"

void	init_ants(t_pathfinder *map, t_ant *ants)
{
	int	total_ants;
	t_llst	*current_path;

	if (!map || !(map->pt_sgraph) || !(map->paths) || !ants)
		return ;
	total_ants = map->pt_sgraph->num_ants;
	current_path = map->paths;
	while (total_ants > 0)
	{
		(*ants).path = (t_llst *)current_path->value;
		(*ants).current_room = (t_llst *)current_path->value;
		(*ants).arrived = 0;
		++ants;
		current_path = current_path->next;
		if (current_path == NULL)
			current_path = map->paths;
		--total_ants;
	}
}
