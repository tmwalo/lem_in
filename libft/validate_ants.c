#include "libft.h"

t_llst	*validate_ants(t_llst *line)
{
	char	**tokens;
	int	invalid;

	if (line == NULL)
		return (NULL);
	invalid = 0;
	while (line && (validate_graph_input((char *)line->value) != NUM))
	{
		if (validate_graph_input((char *)line->value) == CMT)
			;
		else if (validate_graph_input((char *)line->value) == CMD)
		{
			tokens = ft_strtoken((char *)line->value);
			if (!ft_strcmp(*tokens, "##start") || !ft_strcmp(*tokens, "##end"))
				invalid = 1;
			free_splitstr(&tokens);
			if (invalid)
				return (NULL);
		}
		else
			return (NULL);
		line = line->next;
	}
	return ((line) ? line->next : NULL);
}
