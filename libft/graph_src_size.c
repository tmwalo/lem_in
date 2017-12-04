/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_src_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:27:20 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:27:37 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	graph_src_size(t_llst *begin_ll)
{
	t_llst	*current_node;
	int		ret;

	current_node = begin_ll;
	while (current_node != NULL)
	{
		ret = ft_isnum((char *)current_node->value);
		if (ret)
			return (ft_atoi((char *)current_node->value));
		current_node = current_node->next;
	}
	return (0);
}