#include "libft.h"

void	move_ant(t_ant *ants, int *occupied, int index)
{
	if (!ants || !occupied || (index < 0))
		return ;
	--(occupied[*(int *)((ants[index]).current_room)->value]);
	(ants[index]).current_room = ((ants[index]).current_room)->next;
	++(occupied[*(int *)((ants[index]).current_room)->value]);
}
