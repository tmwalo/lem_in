/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_skeys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:20:39 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:21:03 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_skeys(t_sgraph *pt_sgraph)
{
	int		vertices;
	int		index;
	char	**keys;

	if ((pt_sgraph == NULL) || (pt_sgraph->pt_graph == NULL))
		return ;
	vertices = pt_sgraph->pt_graph->vertices;
	if ((pt_sgraph->keys == NULL) || (vertices <= 0))
		return ;
	index = 0;
	keys = pt_sgraph->keys;
	ft_putendl("keys array:");
	while (vertices > 0)
	{
		ft_putstr("index: ");
		ft_putnbr(index);
		ft_putstr(", value: ");
		ft_putendl(keys[index]);
		++index;
		--vertices;
	}
}
