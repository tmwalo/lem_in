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
	t_graph		*pt_graph;

	pt_graph = (t_graph *)ft_memalloc(sizeof(t_graph));

	init_graph(pt_graph, 4);
	graph_add_edge(pt_graph, 0, 2);
	graph_add_edge(pt_graph, 0, 3);
	graph_add_edge(pt_graph, 2, 1);
	graph_add_edge(pt_graph, 3, 1);
	graph_add_edge(pt_graph, 2, 3);

	graph_destroy(NULL);
	printf("%s\n", (pt_graph != NULL) ? "PASS" : "FAIL");

	graph_destroy(&pt_graph);
	printf("%s\n", (pt_graph == NULL) ? "PASS" : "FAIL");

	return (0);
}
