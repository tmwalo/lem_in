/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_edges.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:14:44 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 14:23:34 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	validate_ants(t_llst *line)
{
	char	**tokens;
	int		line_type;

	if (line == NULL)
		return (0);
	while (line != NULL)
	{
		line_type = validate_graph_input((char *)line->value);
		if ((line_type == EDGE) || (line_type == CMT))
			;
		else if (line_type == CMD)
		{
			if (cmd_start_or_end((char *)line->value))
				return (0);
		}
		else
			return (0);
		line = line->next;
	}
	return (1);
}
