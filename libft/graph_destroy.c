#include "libft.h"

void	graph_destroy(t_graph **dbl_pt_graph)
{
	if ((dbl_pt_graph == NULL) || (*dbl_pt_graph == NULL))
		return ;
	adj_lsts_destroy(*dbl_pt_graph);
	ft_memdel((void **)dbl_pt_graph);
}
