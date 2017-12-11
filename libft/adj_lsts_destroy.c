/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adj_lsts_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 11:52:56 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 11:53:04 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	adj_lsts_destroy(t_graph *pt_graph)
{
	int		vertices;
	t_llst	**adj_lsts;

	if (pt_graph == NULL)
		return ;
	vertices = pt_graph->vertices;
	adj_lsts = pt_graph->adj_lsts;
	if ((vertices <= 0) || (adj_lsts == NULL))
		return ;
	while (vertices > 0)
	{
		llst_del(adj_lsts);
		++adj_lsts;
		--vertices;
	}
	ft_memdel((void **)&(pt_graph->adj_lsts));
}
