/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_validators.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:27:07 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 13:27:50 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init_validators(t_graph_input *pt_validator)
{
	if (pt_validator == NULL)
		return ;
	pt_validator[0] = NULL;
	pt_validator[NEMPTY] = ft_not_empty;
	pt_validator[VERTX] = ft_isvertex;
	pt_validator[EDGE] = ft_isedge;
	pt_validator[CMD] = ft_iscommand;
	pt_validator[CMT] = ft_iscomment;
	pt_validator[NUM_ANTS] = ft_isnum_ants;
}
