/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 14:15:00 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/03 15:02:52 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		memcmp_int(int mcmp)
{
	if (mcmp > 0)
		ft_putendl("int positive");
	else if (mcmp < 0)
		ft_putendl("int negative");
	else
		ft_putendl("int zero");
}

int	main(void)
{
	const char		monsters[] = "Battle not with monsters...";
	const char		battle[] = "Battle not with monsters...";
	const char		step[] = "Step into the void.";
	
	ft_putstr(monsters);
	ft_putstr(" cmp to ");
	ft_putendl(battle);
	memcmp_int(ft_memcmp(monsters, battle, 20));
	ft_putstr(battle);
	ft_putstr(" cmp to ");
	ft_putendl(step);
	memcmp_int(ft_memcmp(battle, step, 10));
	ft_putstr(step);
	ft_putstr(" cmp to ");
	ft_putendl(battle);
	memcmp_int(ft_memcmp(step, battle, 10));
	return (0);
}
