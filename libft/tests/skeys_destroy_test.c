#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_sgraph	sgraph;
	t_sgraph	*pt_sgraph;

	pt_sgraph = &sgraph;

	init_sgraph(pt_sgraph, 11, "three", "nine");

	sgraph_add_vertex(pt_sgraph, "125 343 676");
	sgraph_add_vertex(pt_sgraph, "room56 26 76437");
	sgraph_add_vertex(pt_sgraph, "11 54764 745");

	print_skeys(pt_sgraph);

	skeys_destroy(pt_sgraph);

	print_skeys(pt_sgraph);

	return (0);
}
