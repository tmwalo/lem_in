/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_add_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:53:05 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/15 11:55:10 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		graph_add_edge(t_graph *pt_graph, int vertx_a, int vertx_b)
{
	t_llst	**adj_lsts;
	t_llst	*new_node_a;
	t_llst	*new_node_b;

	adj_lsts = pt_graph->adj_lsts;
	new_node_a = llst_new(&vertx_b, sizeof(int));
	if (new_node_a == NULL)
		return (0);
	llst_add(&adj_lsts[vertx_a], new_node_a);
	new_node_b = llst_new(&vertx_a, sizeof(int));
	if (new_node_b == NULL)
		return (0);
	llst_add(&adj_lsts[vertx_b], new_node_b);
	(pt_graph->edges)++;
	return (1);
}
