#include "libft.h"

int	init_graph(t_graph *pt_graph, size_t vertices, char *start, char *end)
{
	int	initialized;

	initialized = 0;
	if (pt_graph != NULL)
	{
		pt_graph->vertices = vertices;
		pt_graph->edges = 0;
		pt_graph->start = start;
		pt_graph->end = end;
		pt_graph->adj_lsts = (t_llst **)malloc(vertices * sizeof(t_llst *) );
		if (pt_graph->adj_lsts != NULL)
			initialized = 1;
	}
	return (initialized);
}
