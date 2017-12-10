#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*pt_begin;

	pt_begin = NULL;
	st_put(&pt_begin, "cactus", 10);
	st_put(&pt_begin, "moonlight", 8);
	st_put(&pt_begin, "thunder dragon", 777);
	print_st(pt_begin);

	st_destroy(&pt_begin);
	print_st(pt_begin);
	printf("%s\n", (pt_begin == NULL) ? "PASS" : "FAIL");

	return (0);
}
