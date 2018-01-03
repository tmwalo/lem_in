/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_paths.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:35:06 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 13:44:15 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	all_paths(t_pathfinder *pt_map, int curr_vtx, int end)
{
	t_llst	*curr_node;

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
			if (!((pt_map->visited)[(*(int *)curr_node->value)]))
			{
				(pt_map->edge_to)[(*(int *)curr_node->value)] = curr_vtx;
				all_paths(pt_map, (*(int *)curr_node->value), end);
			}
			curr_node = curr_node->next;
		}
	}
	(pt_map->visited)[curr_vtx] = 0;
}
