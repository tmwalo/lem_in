#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	ret;

	ret = ft_not_empty(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_not_empty("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_not_empty("analyze this");
	printf("%s\n", (ret == NEMPTY) ? "PASS" : "FAIL");

	return (0);
}
