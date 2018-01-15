/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:07:11 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/15 15:53:44 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	t_llst			*file;
	t_sgraph		*sgraph;
	t_pathfinder	*map;
	int				error;

	error = 0;
	file = NULL;
	if ((sgraph = prepare_sgraph(&file)) == NULL)
		error = 1;
	if ((map = (t_pathfinder *)ft_memalloc(sizeof(t_pathfinder))) == NULL)
		error = 1;
	if (!error && !init_pathfinder(map, sgraph))
		error = 1;
	if (!error)
		store_all_paths(map);
	if (!error && (map->paths != NULL))
		solve_map(&map, &file);
	else
		error = 1;
	if (error)
	{
		ft_putstr_fd("Error\n", 2);
		cleanup(&file, &sgraph, &map);
	}
	return (0);
}
