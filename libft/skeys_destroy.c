#include "libft.h"

void	skeys_destroy(t_sgraph *pt_sgraph)
{
	int	vertices;
	int	index;
	
	if ((pt_sgraph == NULL) || (pt_sgraph->pt_graph == NULL))
		return ;
	vertices = (pt_sgraph->pt_graph)->vertices;
	if (vertices <= 0)
		return ;
	index = 0;
	while (vertices > 0)
	{
		ft_memdel((void **)(pt_sgraph->keys + index));
		++index;
		--vertices;
	}
	ft_memdel((void **)&(pt_sgraph->keys));
}
