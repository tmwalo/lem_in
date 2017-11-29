#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_st_node	*pt_st_node;
	char		*key;
	int			value;

	key = ft_strdup("room17");
	value = 231;
	pt_st_node = st_node_new(key, sizeof(*key) * ft_strlen(key), &value, sizeof(int));
	if (pt_st_node)
	{
		printf("Pass: node key = %s\n", (char *)pt_st_node->key);
		printf("Pass: node value = %d\n", *(int *)pt_st_node->value);
	}
	else
		printf("Fail");

	return (0);
}
