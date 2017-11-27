/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:40:27 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/27 12:46:34 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	init_graph(t_graph *pt_graph, int vertices)
{
	int	initialized;

	initialized = 0;
	if ((pt_graph != NULL) && (vertices > 0))
	{
		pt_graph->vertices = vertices;
		pt_graph->edges = 0;
		pt_graph->adj_lsts = (t_llst **)malloc(vertices * sizeof(t_llst *));
		if (pt_graph->adj_lsts != NULL)
			initialized = 1;
	}
	return (initialized);
}
