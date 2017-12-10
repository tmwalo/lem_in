#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*pt_begin;

	pt_begin = NULL;
	print_st(pt_begin);

	st_put(&pt_begin, "cactus", 10);
	st_put(&pt_begin, "moonlight", 8);
	st_put(&pt_begin, "abyss", 366);
	print_st(pt_begin);

	return (0);
}
