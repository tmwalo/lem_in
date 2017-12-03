#include "libft.h"

void	init_validators(graph_input **pt_validator)
{
	graph_input	*validator;

	if (pt_validator == NULL)
		return ;
	validator = *pt_validator;
	validator[0] = NULL;
	validator[NEMPTY] = ft_not_empty;
	validator[VERTX] = ft_isvertex;
	validator[EDGE] = ft_isedge;
	validator[CMD] = ft_iscommand;
	validator[CMT] = ft_iscomment;
	validator[NUM] = ft_isnum;
}
