/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_add_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:53:05 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/27 11:10:15 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	graph_add_edge(t_graph *pt_graph, int vertx_a, int vertx_b)
{
	t_llst	*adj_lsts;
	t_llst	*new_node_a;
	t_llst	*new_node_b;

	adj_lsts = pt_graph->adj_lsts;
	new_node_a = llst_new(&vertx_b, sizeof(int));
	if (adj_lsts[vertx_a] == NULL)
		adj_lsts[vertx_a] = new_node_a;
	else
		llst_add(&adj_lsts[vertx_a], new_node_a);
	new_node_b = llst_new(&vertx_a, sizeof(int));
	if (adj_lsts[vertx_b] == NULL)
		adj_lsts[vertx_b] = new_node_b;
	else
		llst_add(&adj_lsts[vertx_b], new_node_b);
}
