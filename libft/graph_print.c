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
	ft_putstr("Vertices: ");
	ft_putnbr(pt_graph->vertices);
	ft_putstr("\n");
	ft_putstr("Edges: ");
	ft_putnbr(pt_graph->edges);
	ft_putstr("\n");
	print_edges(pt_graph);
}
