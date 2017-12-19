#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_sgraph	*pt_sgraph;
	t_pathfinder	*pt_map;
	int		ret;

	file = read_file(0);
	pt_sgraph = sgraph_build(file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));

	ret = init_pathfinder(NULL, pt_sgraph);
	printf("%s\n", (!ret) ? "PASS" : "FAIL");

	ret = init_pathfinder(pt_map, NULL);
	printf("%s\n", (!ret) ? "PASS" : "FAIL");

	ret = init_pathfinder(pt_map, pt_sgraph);
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	printf("%s\n", (pt_map->visited) ? "PASS" : "FAIL");

	printf("%s\n", (pt_map->edge_to) ? "PASS" : "FAIL");

	sgraph_destroy(&pt_sgraph);
	llst_del(&file);
	return (0);
}
