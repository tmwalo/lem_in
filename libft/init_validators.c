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

void	init_validators(t_graph_input **pt_validator)
{
	t_graph_input	*validator;

	if (pt_validator == NULL)
		return ;
	validator = *pt_validator;
	validator[0] = NULL;
	validator[NEMPTY] = ft_not_empty;
	validator[VERTX] = ft_isvertex;
	validator[EDGE] = ft_isedge;
	validator[CMD] = ft_iscommand;
	validator[CMT] = ft_iscomment;
	validator[NUM] = ft_isnum;
}
