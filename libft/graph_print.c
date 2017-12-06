/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:11:39 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/06 11:11:48 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	graph_print(t_graph *pt_graph)
{
	int		index;
	t_llst	*pt_begin;
	t_llst	*current_node;
	int		value;

	if (pt_graph == NULL)
		return ;
	index = 0;
	while (index < pt_graph->vertices)
	{
		pt_begin = (pt_graph->adj_lsts)[index];
		ft_putstr("adj_lsts array index: ");
		ft_putnbr(index);
		ft_putstr(", adjacency list:");
		current_node = pt_begin;
		while (current_node != NULL)
		{
			ft_putstr(" ");
			value = *(int *)current_node->value;
			ft_putnbr(value);
			current_node = current_node->next;
		}
		ft_putstr("\n");
		++index;
	}
}
