/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ant_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:06:07 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 12:06:15 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_ant_pos(t_pathfinder *map, t_ant *ants, int index)
{
	int		ant_num;
	char	**keys;

	if (!map || !(map->pt_sgraph) || !ants || (index < 0))
		return ;
	ant_num = index + 1;
	keys = map->pt_sgraph->keys;
	ft_putstr("L");
	ft_putnbr(ant_num);
	ft_putstr("-");
	ft_putstr(keys[*(int *)((ants[index]).current_room)->value]);
	ft_putstr(" ");
}
