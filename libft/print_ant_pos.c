#include "libft.h"

void	print_ant_pos(t_pathfinder *map, t_ant *ants, int index)
{
	int	ant_num;
	char	**keys;

	if (!map || !(map->pt_sgraph) || !ants || (index < 0))
		return ;
	ant_num = index + 1;
	keys = map->pt_sgraph->keys;
	ft_putstr("L");
	ft_putnbr(ant_num);
	ft_putstr("-");
	ft_putstr(keys[*(int *)((ants[index]).current_room)->value]);
	ft_putstr(" ");
}
