/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_all_paths.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:04:21 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/10 14:09:40 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	store_all_paths(t_pathfinder *map)
{
	void	*start;
	void	*end;

	if ((map == NULL) || (map->pt_sgraph == NULL))
		return ;
	start = st_get(map->pt_sgraph->st_begin, map->pt_sgraph->start);
	end = st_get(map->pt_sgraph->st_begin, map->pt_sgraph->end);
	all_paths(map, *(int *)start, *(int *)end);
}
