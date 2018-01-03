/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths_cross.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 13:06:51 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 14:42:18 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		paths_cross(void *path_x, void *path_y, int start, int end)
{
	t_llst	*curr_node_x;
	t_llst	*curr_node_y;
	int		vtx_x;
	int		vtx_y;

	if ((path_x == NULL) || (path_y == NULL) || (start < 0) || (end < 0))
		return (0);
	curr_node_x = (t_llst *)path_x;
	while (curr_node_x != NULL)
	{
		curr_node_y = (t_llst *)path_y;
		while (curr_node_y != NULL)
		{
			vtx_x = *(int *)curr_node_x->value;
			vtx_y = *(int *)curr_node_y->value;
			if ((vtx_x == vtx_y) && (vtx_x != start) && (vtx_x != end))
				return (1);
			curr_node_y = curr_node_y->next;
		}
		curr_node_x = curr_node_x->next;
	}
	return (0);
}
