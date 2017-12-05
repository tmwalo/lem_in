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

	ret = sgraph_add_edge(NULL, "behold");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "32-room56");
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "seven-32 # comment");
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "three-room45");
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "not an edge");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "room45-room56 just stuff");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "moon-mars");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = sgraph_add_edge(pt_sgraph, "space-three");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	llst_del(&file);
	return (0);
}
