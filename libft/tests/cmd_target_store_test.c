#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*target;

	printf("%s\n", (cmd_target_store(NULL) == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (cmd_target_store("") == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (cmd_target_store("  		  ") == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (!cmd_target_store("##spiderman")) ? "PASS" : "FAIL");

	target = cmd_target_store("room17 35 46");
	printf("%s, %s\n", (target) ? "PASS" : "FAIL", target);
	if (target)
		free(target);

	target = cmd_target_store("	room23  11 	90  #comment	  ");
	printf("%s, %s\n", (target) ? "PASS" : "FAIL", target);
	if (target)
		free(target);

	return (0);
}
