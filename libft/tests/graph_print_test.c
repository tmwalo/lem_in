/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_add_edge_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:02:35 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/29 11:18:12 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	t_graph		graph;
	t_graph		*pt_graph;
	int			count;
	t_llst		**adj_lsts;
	t_llst		*list;

	pt_graph = &graph;

	init_graph(pt_graph, 4);
	graph_add_edge(pt_graph, 0, 2);
	graph_add_edge(pt_graph, 0, 3);
	graph_add_edge(pt_graph, 2, 1);
	graph_add_edge(pt_graph, 3, 1);
	graph_add_edge(pt_graph, 2, 3);

	graph_print(pt_graph);

	count = pt_graph->vertices;
	adj_lsts = pt_graph->adj_lsts;
	while (count > 0)
	{
		list = *adj_lsts;
		llst_del(&list);
		++adj_lsts;
		--count;
	}

	adj_lsts = pt_graph->adj_lsts;
	free(adj_lsts);

	return (0);
}
