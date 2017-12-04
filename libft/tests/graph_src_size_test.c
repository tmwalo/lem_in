#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*file;
	int	ret;

	file = read_file(0);
	ret = graph_src_size(file);
	printf("ret: %d\n", ret);
	llst_del(&file);
	return (0);
}
