/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_build.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:32:21 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 15:03:57 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sgraph	*sgraph_build(t_llst *file)
{
	t_sgraph	*sgraph;
	int			vertices;
	char		*start;
	char		*end;
	int			error;

	if ((file == NULL) || !validate_graph_file(file))
		return (NULL);
	vertices = count_vertices(file);
	start = find_prev_cmd_target(file, "##start");
	end = find_prev_cmd_target(file, "##end");
	sgraph = (t_sgraph *)ft_memalloc(sizeof(t_sgraph));
	if (sgraph == NULL)
		return (NULL);
	error = 0;
	sgraph->num_ants = graph_src_size(file);
	if (!init_sgraph(sgraph, vertices, start, end) || !(sgraph->num_ants))
		error = 1;
	if (!error && !sgraph_add_vertices(file, sgraph))
		error = 1;
	if (!error && !sgraph_add_all_edges(file, sgraph))
		error = 1;
	if (error)
		sgraph_destroy(&sgraph);
	return ((!error) ? sgraph : NULL);
}
