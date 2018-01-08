#include "libft.h"

int	validate_ants(t_llst *line)
{
	char	**tokens;
	int	invalid;

	if (line == NULL)
		return (0);
	invalid = 0;
	while (line != NULL)
	{
		if (validate_graph_input((char *)line->value) == EDGE)
			;
		else if (validate_graph_input((char *)line->value) == CMT)
			;
		else if (validate_graph_input((char *)line->value) == CMD)
		{
			tokens = ft_strtoken((char *)line->value);
			if (!ft_strcmp(*tokens, "##start") || !ft_strcmp(*tokens, "##end"))
				invalid = 1;
			free_splitstr(&tokens);
			if (invalid)
				return (0);
		}
		else
			return (0);
		line = line->next;
	}
	return (1);
}
