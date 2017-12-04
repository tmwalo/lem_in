#include "libft.h"
#include <stdio.h>

int	sgraph_add_vertex(t_sgraph *pt_sgraph, char *str)
{
	char	**tokens;
	int	error;
	int	key_index;

	printf("Conditional - validate parameters\n");
	if (!pt_sgraph || !str || (ft_strlen(str) == 0) || !ft_isvertex(str))
		return (0);
	error = 0;
	printf("Conditional - split str\n");
	tokens = ft_strtok(str);
	if (tokens == NULL)
		return (0);
	printf("Conditional - add vertex\n");
	if (st_get(pt_sgraph->st_begin, *tokens) == NULL)
	{
		printf("Insert vertex conditional\n");
		key_index = st_size(pt_sgraph->st_begin);
		(pt_sgraph->keys)[key_index] = ft_strdup(*tokens);
		printf("key: %s, value: %d\n", *tokens, key_index);
		st_put(&(pt_sgraph->st_begin), *tokens, key_index);
	}
	else
	{
		printf("Skipped add vertex code block\n");
		error = 1;
	}
	if (tokens)
		free_splitstr(&tokens);
	if (error)
		return (0);
	return (1);
}
