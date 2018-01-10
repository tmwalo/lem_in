/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 17:37:07 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/10 17:56:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	solve_map(t_pathfinder **map, t_llst **file)
{
	void	*start;
	void	*end;
	t_llst	*current_node;

	if (!map || !(*map) || !((*map)->paths))
		return ;
	start = st_get((*map)->pt_sgraph->st_begin, (*map)->pt_sgraph->start);
	end = st_get((*map)->pt_sgraph->st_begin, (*map)->pt_sgraph->end);
	viable_paths(&((*map)->paths), *(int *)start, *(int *)end);
	if (file != NULL)
	{
		current_node = *file;
		while (current_node != NULL)
		{
			ft_putendl((char *)current_node->value);
			current_node = current_node->next;
		}
	}
	ft_putstr("\n");
	move_ants(*map);
	llst_del(file);
	pathfinder_destroy(map);
}
