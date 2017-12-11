/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:22:29 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:22:31 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	sgraph_destroy(t_sgraph **dbl_pt_sgraph)
{
	if ((dbl_pt_sgraph == NULL) || (*dbl_pt_sgraph == NULL))
		return ;
	if ((*dbl_pt_sgraph)->st_begin != NULL)
		st_destroy(&((*dbl_pt_sgraph)->st_begin));
	if ((*dbl_pt_sgraph)->keys != NULL)
		skeys_destroy(*dbl_pt_sgraph);
	if ((*dbl_pt_sgraph)->pt_graph != NULL)
		graph_destroy(&((*dbl_pt_sgraph)->pt_graph));
	if ((*dbl_pt_sgraph)->start != NULL)
		ft_memdel((void **)&((*dbl_pt_sgraph)->start));
	if ((*dbl_pt_sgraph)->end != NULL)
		ft_memdel((void **)&((*dbl_pt_sgraph)->end));
	ft_memdel((void **)dbl_pt_sgraph);
}
