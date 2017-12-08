/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graph_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:07:39 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/27 12:51:36 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	t_graph		graph;
	t_graph		*pt_graph;
	int			ret;

	pt_graph = &graph;

	ret = init_graph(NULL, 13);
	if 	(ret == 0)
		printf("Pass\n");
	else
		printf("Fail\n");

	ret = init_graph(pt_graph, -191);
	if 	(ret == 0)
		printf("Pass\n");
	else
		printf("Fail\n");

	ret = init_graph(pt_graph, 27);
	if 	(ret == 1)
		printf("Pass: vertices: %d, edges: %d, adj_lsts: %p\n", pt_graph->vertices, pt_graph->edges, pt_graph->adj_lsts);
	else
		printf("Fail\n");

	return (0);
}
