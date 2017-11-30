#include "libft.h"

void	init_symgraph(t_symgraph *pt_symgraph, int vertices, char *s, char *e)
{
	char	**keys;
	t_graph	*pt_graph;
	int	array_size;

	if (!pt_symgraph || (vertices <= 0) || !s || !e)
		return ;
	pt_symgraph->st_begin = NULL;
	keys = (char **)malloc(sizeof(char *) * vertices);
	if (!keys)
		return ;
	array_size = vertices;
	while (array_size > 0)
	{
		*keys = NULL;
		++keys;
		--array_size;
	}
	pt_symgraph->keys = keys;
	pt_graph = (t_graph *)malloc(sizeof(t_graph));
	if (!pt_graph)
		return ;
	init_graph(pt_graph, vertices);
	pt_symgraph->pt_graph = pt_graph;
	pt_symgraph->start = ft_strdup(s);
	pt_symgraph->end = ft_strdup(e);
}
