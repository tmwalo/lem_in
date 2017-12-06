#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*file;
	t_sgraph	sgraph;
	t_sgraph	*pt_sgraph;
	int		ret;

	file = read_file(0);
	pt_sgraph = &sgraph;
	init_sgraph(pt_sgraph, 5, "three", "seven");
	sgraph_add_vertices(file, pt_sgraph);

	ret = sgraph_add_all_edges(file, pt_sgraph);
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	graph_print(pt_sgraph->pt_graph);

	llst_del(&file);
	return (0);
}
