#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_sgraph	*pt_sgraph;
	int		occupied[4];
	int		index;
	int		rooms;

	file = read_file(0);
	pt_sgraph = sgraph_build(file);

	init_occupied(pt_sgraph, occupied);
	index = 0;
	rooms = pt_sgraph->pt_graph->vertices;
	while (rooms > 0)
	{
		printf("%d-%d ", index, occupied[index]);
		++index;
		--rooms;
	}
	printf("\ntotal ants: %d\n", pt_sgraph->num_ants);

	sgraph_destroy(&pt_sgraph);
	llst_del(&file);
	return (0);
}
