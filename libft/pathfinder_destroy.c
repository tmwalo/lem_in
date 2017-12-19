#include "libft.h"

void	pathfinder_destroy(t_pathfinder **pt_map)
{
	t_llst	*paths_copy;

	if ((pt_map == NULL) || (*pt_map == NULL))
		return ;
	ft_memdel((void **)&((*pt_map)->visited));
	ft_memdel((void **)&((*pt_map)->edge_to));
	sgraph_destroy(&((*pt_map)->pt_sgraph));
	paths_copy = (*pt_map)->paths;
	while((*pt_map)->paths != NULL)
	{
		llst_del((t_llst **)&((*pt_map)->paths->value));
		(*pt_map)->paths = (*pt_map)->paths->next;
	}
	(*pt_map)->paths = paths_copy;
	llst_del(&((*pt_map)->paths));
	ft_memdel((void **)pt_map);
}
