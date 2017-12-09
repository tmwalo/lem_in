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
	int		ret;

	pt_graph = &graph;
	ret = init_graph(pt_graph, 27);
	if (ret == 1)
	{
		adj_lsts_destroy(pt_graph);
		printf("%s\n", (pt_graph->adj_lsts == NULL) ? "PASS" : "FAIL");
	}
	return (0);
}
