#include "libft.h"

int	sgraph_add_edge(t_sgraph *pt_sgraph, char *str)
{
	char	**tokens;
	char	**edge;
	void	*index_a;
	void	*index_b;

	if (!pt_sgraph || !str || (ft_strlen(str) == 0) || !ft_isedge(str))
		return (0);
	tokens = ft_strtok(str);
	if (tokens == NULL)
		return (0);
	edge = ft_strsplit(*tokens, '-');
	if (edge == NULL)
		return (0);
	index_a = st_get(pt_sgraph->st_begin, *edge);
	index_b = st_get(pt_sgraph->st_begin, *(edge + 1));
	if ((index_a == NULL) || (index_b == NULL))
		return (0);
	graph_add_edge(pt_sgraph->pt_graph, *(int *)index_a, *(int *)index_b);
	return (1);
}
