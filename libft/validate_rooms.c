/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_rooms.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:15:11 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 14:15:42 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*validate_rooms(t_llst *line)
{
	int		line_type;
	int		start_cmd;
	int		end_cmd;

	if (line == NULL)
		return (NULL);
	start_cmd = 0;
	end_cmd = 0;
	while (line && (validate_graph_input((char *)line->value) != EDGE))
	{
		line_type = validate_graph_input((char *)line->value);
		if ((line_type == VERTX) || (line_type == CMT))
			;
		else if (line_type == CMD)
		{
			if (ft_strcmp((char *)line->value, "##start") == 0)
				++start_cmd;
			else if (ft_strcmp((char *)line->value, "##end") == 0)
				++end_cmd;
		}
		else
			return (NULL);
		line = line->next;
	}
	return (((start_cmd == 1) && (end_cmd == 1)) ? line : NULL);
}
