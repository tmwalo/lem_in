#include "libft.h"

int	next_free_or_end(t_ant ant, int *occupied, int end)
{
	if (!occupied || (end < 0))
		return (0);
	if (!occupied[(*(int *)((ant.current_room)->next)->value)])
		return (1);
	if ((*(int *)((ant.current_room)->next)->value) == end)
		return (1);
	return (0);
}
