#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%s\n", (first_token(NULL) == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (first_token("") == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (first_token("     ") == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp("the birds", first_token("spiderman")) != 0) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp("heaven", first_token("heaven and earth")) == 0) ? "PASS" : "FAIL");

	return (0);
}
