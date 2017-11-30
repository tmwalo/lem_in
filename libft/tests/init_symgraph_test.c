#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_symgraph	symgraph;
	t_symgraph	*pt_symgraph;

	pt_symgraph = &symgraph;

	init_symgraph(pt_symgraph, 11, "three", "nine");

	printf("%s\n", (pt_symgraph->st_begin == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (pt_symgraph->pt_graph) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp(pt_symgraph->start, "three") == 0) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp(pt_symgraph->end, "nine") == 0) ? "PASS" : "FAIL");

	return (0);
}
