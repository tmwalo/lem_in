/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:49:56 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/15 16:12:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	cleanup(t_llst **file, t_sgraph **sgraph, t_pathfinder **map)
{
	if (map && *map)
		pathfinder_destroy(map);
	else if (sgraph && *sgraph)
		sgraph_destroy(sgraph);
	if (file && *file)
		llst_del(file);
}
