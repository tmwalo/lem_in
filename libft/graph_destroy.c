/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:12:06 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:12:09 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	graph_destroy(t_graph **dbl_pt_graph)
{
	if ((dbl_pt_graph == NULL) || (*dbl_pt_graph == NULL))
		return ;
	adj_lsts_destroy(*dbl_pt_graph);
	ft_memdel((void **)dbl_pt_graph);
}
