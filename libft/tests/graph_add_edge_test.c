/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_add_edge_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:02:35 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/27 17:11:05 by tmwalo           ###   ########.fr       */
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
	t_llst		*current_node;
	int			index;

	pt_graph = &graph;

	init_graph(pt_graph, 4);
	graph_add_edge(pt_graph, 0, 2);
	graph_add_edge(pt_graph, 0, 3);
	graph_add_edge(pt_graph, 2, 1);
	graph_add_edge(pt_graph, 3, 1);
	graph_add_edge(pt_graph, 2, 3);

	count = pt_graph->vertices;
	adj_lsts = pt_graph->adj_lsts;
	index = 0;
	while (count > 0)
	{
		list = *adj_lsts;
		current_node = list;
		printf("vertex: %d, adjacency list:", index);
		while (current_node)
		{
			printf(" %d", *(int *)(current_node->value));
			current_node = current_node->next;
		}
		printf("\n");
		++index;
		++adj_lsts;
		--count;
	}

	return (0);
}
