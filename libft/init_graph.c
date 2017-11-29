/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:40:27 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/29 11:14:56 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	init_graph(t_graph *pt_graph, int vertices)
{
	int		initialized;
	t_llst	**adj_lsts;

	initialized = 0;
	if ((pt_graph != NULL) && (vertices > 0))
	{
		pt_graph->vertices = vertices;
		pt_graph->edges = 0;
		pt_graph->adj_lsts = (t_llst **)malloc(vertices * sizeof(t_llst *));
		if (pt_graph->adj_lsts != NULL)
		{
			adj_lsts = pt_graph->adj_lsts;
			while (vertices > 0)
			{
				*(adj_lsts) = NULL;
				++(adj_lsts);
				--vertices;
			}
			initialized = 1;
		}
	}
	return (initialized);
}
