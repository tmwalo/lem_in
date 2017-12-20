/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:41:52 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 11:42:02 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*path_to(t_pathfinder *pt_map, int vertex)
{
	t_llst		*begin_ll;
	t_llst		*new_node;
	t_sgraph	*sgraph;
	int			start;

	begin_ll = NULL;
	new_node = NULL;
	if (!pt_map || (vertex < 0) || !((pt_map->visited)[vertex]))
		return (NULL);
	sgraph = pt_map->pt_sgraph;
	start = *(int *)st_get(sgraph->st_begin, sgraph->start);
	while (1)
	{
		new_node = llst_new(&vertex, sizeof(int));
		if (new_node == NULL)
		{
			llst_del(&begin_ll);
			return (NULL);
		}
		llst_add(&begin_ll, new_node);
		if (vertex == start)
			break ;
		vertex = (pt_map->edge_to)[vertex];
	}
	return (begin_ll);
}
