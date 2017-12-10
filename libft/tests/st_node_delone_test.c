#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_st_node	*pt_st_node;
	char		*key;
	size_t		len;
	int			val;

	key = ft_strdup("room17");
	val = 187;
	len = ft_strlen(key);
	pt_st_node = st_node_new(key, (len + 1) * sizeof(char), &val, sizeof(int));
	free(key);

	printf("Node values:");
	printf(" key = %s", (char *)((pt_st_node->key) ) );
	printf(" value = %d\n", *(int *)((pt_st_node->value) ) );

	st_node_delone(&pt_st_node);

	printf("%s\n", (pt_st_node == NULL) ? "Pass: pt_st_node is null" : "Fail: pt_st_node");
	return (0);
}
