/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viable_paths_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 13:11:28 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/09 14:17:13 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_llst		*rev_file;
	t_sgraph	*pt_sgraph;
	t_pathfinder	*pt_map;
	int		start;
	int		end;

	file = read_file(0);
	rev_file = llst_rev(file);
	pt_sgraph = sgraph_build(file, rev_file);
	pt_map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder));
	init_pathfinder(pt_map, pt_sgraph);

	start = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->start);
	end = *(int *)st_get(pt_map->pt_sgraph->st_begin, pt_map->pt_sgraph->end);
	all_paths(pt_map, start, end);
	viable_paths(&(pt_map->paths), start, end);

	move_ants(pt_map);

	sgraph_destroy(&pt_sgraph);
	llst_del(&file);
	llst_del(&rev_file);
	return (0);
}
