#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*file;
	t_sgraph	*pt_sgraph;

	file = read_file(0);
	pt_sgraph = (t_sgraph *)ft_memalloc(sizeof(t_sgraph));
	init_sgraph(pt_sgraph, 5, "three", "seven");
	pt_sgraph->num_ants = 17;
	sgraph_add_vertices(file, pt_sgraph);
	sgraph_add_all_edges(file, pt_sgraph);
	sgraph_print(pt_sgraph);

	sgraph_destroy(&pt_sgraph);
	sgraph_print(pt_sgraph);
	printf("%s\n", (pt_sgraph == NULL) ? "PASS" : "FAIL");

	llst_del(&file);
	return (0);
}
