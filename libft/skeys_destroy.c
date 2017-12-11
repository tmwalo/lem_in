/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skeys_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:23:27 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:24:21 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skeys_destroy(t_sgraph *pt_sgraph)
{
	int	vertices;
	int	index;

	if ((pt_sgraph == NULL) || (pt_sgraph->pt_graph == NULL))
		return ;
	vertices = (pt_sgraph->pt_graph)->vertices;
	if (vertices <= 0)
		return ;
	index = 0;
	while (vertices > 0)
	{
		ft_memdel((void **)(pt_sgraph->keys + index));
		++index;
		--vertices;
	}
	ft_memdel((void **)&(pt_sgraph->keys));
}
