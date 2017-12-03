#include "libft.h"

int	validate_graph_input(char *str)
{
	graph_input	*validators;
	int		num_validators;
	int		index;
	graph_input	pt_func;
	int		passed;

	num_validators = VALIDATORS + 1;
	validators = (graph_input *)malloc(sizeof(graph_input *) * num_validators);
	if (validators == NULL)
		return (0);
	init_validators(&validators);
	passed = 0;
	index = 1;
	while ((index < num_validators) && (passed != 2))
	{
		pt_func = *(validators + index);
		if (pt_func(str))
			++passed;
		++index;
	}
	ft_memdel((void **)&validators);
	if (passed >= 2)
		return (1);
	return (0);
}
