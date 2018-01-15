/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_src_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:27:20 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/15 11:10:54 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	graph_src_size(t_llst *begin_ll)
{
	t_llst	*current_node;
	char	**tokens;
	int		src_size;
	int		matches;

	matches = 0;
	current_node = begin_ll;
	while (current_node != NULL)
	{
		if (ft_isnum_ants((char *)current_node->value))
		{
			tokens = ft_strtok((char *)current_node->value);
			src_size = ft_atoi(*tokens);
			++matches;
			free_splitstr(&tokens);
		}
		current_node = current_node->next;
	}
	if (matches == 1)
		return (src_size);
	return (0);
}
