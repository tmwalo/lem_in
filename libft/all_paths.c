/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_paths.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:35:06 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 11:35:22 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	all_paths(t_pathfinder *pt_map, int curr_vtx, int end)
{
	t_llst	*curr_node;
	int		next_vertex;

	if ((pt_map == NULL) || (curr_vtx < 0))
		return ;
	(pt_map->visited)[curr_vtx] = 1;
	if (curr_vtx == end)
	{
		if (!path_store(pt_map, end))
			return ;
	}
	else
	{
		curr_node = (pt_map->pt_sgraph->pt_graph->adj_lsts)[curr_vtx];
		while (curr_node != NULL)
		{
			next_vertex = *(int *)curr_node->value;
			if (!((pt_map->visited)[next_vertex]))
			{
				(pt_map->edge_to)[next_vertex] = curr_vtx;
				all_paths(pt_map, next_vertex, end);
			}
			curr_node = curr_node->next;
		}
	}
	(pt_map->visited)[curr_vtx] = 0;
}
