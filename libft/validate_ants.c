/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_ants.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:14:27 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 13:31:49 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*validate_ants(t_llst *line)
{
	int		line_type;

	if (line == NULL)
		return (NULL);
	while (line != NULL)
	{
		line_type = validate_graph_input((char *)line->value);
		if (line_type == NUM_ANTS)
			return (line->next);
		else if (line_type == CMT)
			;
		else if (line_type == CMD)
		{
			if (cmd_start_or_end((char *)line->value))
				return (NULL);
		}
		else
			return (NULL);
		line = line->next;
	}
	return (NULL);
}
