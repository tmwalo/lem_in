/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_add_vertex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 11:10:31 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/06 11:11:09 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sgraph_add_vertex(t_sgraph *pt_sgraph, char *str)
{
	char	**tokens;
	int		error;
	int		key_index;

	if (!pt_sgraph || !str || (ft_strlen(str) == 0) || !ft_isvertex(str))
		return (0);
	error = 0;
	tokens = ft_strtok(str);
	if (tokens == NULL)
		return (0);
	if (st_get(pt_sgraph->st_begin, *tokens) == NULL)
	{
		key_index = st_size(pt_sgraph->st_begin);
		if (((pt_sgraph->keys)[key_index] = ft_strdup(*tokens)) == NULL)
			error = 1;
		if (!st_put(&(pt_sgraph->st_begin), *tokens, key_index))
			error = 1;
	}
	else
		error = 1;
	if (tokens)
		free_splitstr(&tokens);
	if (error)
		return (0);
	return (1);
}
