/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:07:11 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/09 17:14:24 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	t_sgraph		*sgraph;
	t_pathfinder	*map;
	void				*start;
	void				*end;
	int				error;

	error = 0;
	sgraph = prepare_sgraph();
	if (sgraph == NULL)
		error = 1;
	map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	if (!error && (map == NULL))
		error = 1;
	if (!error && !init_pathfinder(map, sgraph))
	{
		error = 1;
		sgraph_destroy(&sgraph);
	}
	if (!error)
	{
		start = st_get(map->pt_sgraph->st_begin, map->pt_sgraph->start);
		end = st_get(map->pt_sgraph->st_begin, map->pt_sgraph->end);
		all_paths(map, *(int *)start, *(int *)end);
	}
	if (!error && (map->paths == NULL))
		error = 1;
	if (!error)
		viable_paths(&(map->paths), *(int *)start, *(int *)end);
	if (!error)
		move_ants(map);
	if (!error)
		pathfinder_destroy(&map);
	if (error)
		ft_putstr_fd("Error\n", 2);
	return (0);
}
