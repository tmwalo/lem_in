#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*file;
	int	ret;

	file = read_file(0);
	ret = validate_graph_file(file);
	printf("ret: %d\n", ret);
	llst_del(&file);
	return (0);
}
