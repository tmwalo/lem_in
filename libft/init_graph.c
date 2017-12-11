/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:40:27 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:17:23 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	init_graph(t_graph *graph, int vertices)
{
	int		initialized;

	initialized = 0;
	if ((graph != NULL) && (vertices > 0))
	{
		graph->vertices = vertices;
		graph->edges = 0;
		graph->adj_lsts = (t_llst **)ft_memalloc(vertices * sizeof(t_llst *));
		initialized = 1;
	}
	return (initialized);
}
