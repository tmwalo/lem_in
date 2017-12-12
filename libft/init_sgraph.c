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

int	init_sgraph(t_sgraph *sgraph, int vertices, char *s, char *e)
{
	int	error;
	int	ret;

	error = 0;
	if (!sgraph || (vertices <= 0) || !s || !e)
		error = 1;
	else
	{
		sgraph->st_begin = NULL;
		sgraph->keys = (char **)ft_memalloc(sizeof(char *) * vertices);
		sgraph->pt_graph = (t_graph *)ft_memalloc(sizeof(t_graph));
		ret = init_graph(sgraph->pt_graph, vertices);
		sgraph->start = first_token(s);
		sgraph->end = first_token(e);
		if ((sgraph->keys == NULL) || (sgraph->pt_graph == NULL) || (ret == 0))
			error = 1;
		if ((sgraph->start == NULL) || (sgraph->end == NULL))
			error = 1;
	}
	if (error)
		return (0);
	else
		return (1);
}
