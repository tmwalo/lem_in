#include "libft.h"

t_llst	*validate_rooms(t_llst *line)
{
	char	**tokens;
	int	invalid;

	if (line == NULL)
		return (NULL);
	invalid = 0;
	while (line && (validate_graph_input((char *)line->value) != EDGE))
	{
		if (validate_graph_input((char *)line->value) == VERTX)
			;
		else if (validate_graph_input((char *)line->value) == CMT)
			;
		else if (validate_graph_input((char *)line->value) == CMD)
			;
		else
			return (NULL);
		line = line->next;
	}
	return ((line) ? line : NULL);
}
