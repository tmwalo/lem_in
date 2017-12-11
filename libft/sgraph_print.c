/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:22:52 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:22:55 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sgraph_print(t_sgraph *pt_sgraph)
{
	if (pt_sgraph == NULL)
		return ;
	ft_putendl("symbol graph:");
	print_st(pt_sgraph->st_begin);
	print_skeys(pt_sgraph);
	graph_print(pt_sgraph->pt_graph);
	ft_putstr("number of ants: ");
	ft_putnbr(pt_sgraph->num_ants);
	ft_putstr("\n");
	ft_putstr("start room: ");
	ft_putstr(pt_sgraph->start);
	ft_putstr("\n");
	ft_putstr("end room: ");
	ft_putstr(pt_sgraph->end);
	ft_putstr("\n");
}
