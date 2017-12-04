/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sgraph.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:05:51 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:08:09 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init_sgraph(t_sgraph *sgraph, int vertices, char *s, char *e)
{
	char		**keys;
	t_graph		*pt_graph;
	int			array_size;

	if (!sgraph || (vertices <= 0) || !s || !e)
		return ;
	sgraph->st_begin = NULL;
	keys = (char **)malloc(sizeof(char *) * vertices);
	if (!keys)
		return ;
	array_size = vertices;
	while (array_size > 0)
	{
		*keys = NULL;
		++keys;
		--array_size;
	}
	sgraph->keys = keys;
	pt_graph = (t_graph *)malloc(sizeof(t_graph));
	if (!pt_graph)
		return ;
	init_graph(pt_graph, vertices);
	sgraph->pt_graph = pt_graph;
	sgraph->start = ft_strdup(s);
	sgraph->end = ft_strdup(e);
}
