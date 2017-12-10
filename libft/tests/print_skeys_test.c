#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_sgraph	sgraph;
	t_sgraph	*pt_sgraph;

	pt_sgraph = &sgraph;

	init_sgraph(pt_sgraph, 11, "three", "nine");

	print_skeys(NULL);

	print_skeys(pt_sgraph);

	return (0);
}
