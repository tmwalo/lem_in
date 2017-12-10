#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_sgraph	sgraph;
	t_sgraph	*pt_sgraph;
	int		ret1;
	int		ret2;
	int		ret3;

	pt_sgraph = &sgraph;

	init_sgraph(pt_sgraph, 3, "seven", "nine");

	ret1 = sgraph_add_vertex(pt_sgraph, "125 343 676");
	ret2 = sgraph_add_vertex(pt_sgraph, "room56 26 76437");
	ret3 = sgraph_add_vertex(pt_sgraph, "11 54764 745");

	sgraph_print(NULL);

	if (ret1 && ret2 && ret3)
		sgraph_print(pt_sgraph);

	return (0);
}
