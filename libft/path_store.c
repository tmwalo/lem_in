/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_store.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:40:54 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 11:42:47 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		path_store(t_pathfinder *pt_map, int end)
{
	t_llst	*new_node;
	t_llst	*paths_copy;

	if ((pt_map == NULL) || (end < 0))
		return (0);
	new_node = llst_new_empty();
	if (new_node == NULL)
	{
		paths_copy = pt_map->paths;
		while (pt_map->paths != NULL)
		{
			llst_del((t_llst **)&(pt_map->paths->value));
			pt_map->paths = pt_map->paths->next;
		}
		pt_map->paths = paths_copy;
		llst_del(&(pt_map->paths));
		return (0);
	}
	new_node->value = path_to(pt_map, end);
	llst_add(&(pt_map->paths), new_node);
	return (1);
}
