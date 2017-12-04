/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_vertices.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:31:07 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 13:31:22 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_vertices(t_llst *begin_ll)
{
	int		vertices;
	t_llst	*current_node;
	int		ret;

	current_node = begin_ll;
	vertices = 0;
	while (current_node != NULL)
	{
		ret = ft_isvertex((char *)current_node->value);
		if (ret)
			++vertices;
		current_node = current_node->next;
	}
	return (vertices);
}
