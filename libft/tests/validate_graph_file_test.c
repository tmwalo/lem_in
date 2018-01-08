#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*file;
	t_llst	*rev_file;
	int	ret;

	file = read_file(0);
	rev_file = llst_rev(file);

	ret = validate_graph_file(rev_file);
	printf("ret: %d\n", ret);

	llst_del(&rev_file);
	llst_del(&file);
	return (0);
}
