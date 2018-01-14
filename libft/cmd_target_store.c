#include "libft.h"

char	*cmd_target_store(char *str)
{
	char	**tokens;
	char	*room;

	if (str == NULL)
		return (NULL);
	if (!ft_isvertex(str))
		return (NULL);
	tokens = ft_strtok(str);
	room = ft_strdup(*tokens);
	free_splitstr(&tokens);
	if (room == NULL)
		return (NULL);
	return (room);
}
