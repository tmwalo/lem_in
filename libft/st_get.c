/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:22:29 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:24:42 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*st_get(t_llst *begin, void *key)
{
	t_llst		*current_node;
	t_st_node	*st_node;

	if ((begin == NULL) || (key == NULL))
		return (NULL);
	current_node = begin;
	while (current_node != NULL)
	{
		st_node = (t_st_node *)current_node->value;
		if (ft_memcmp(key, st_node->key, (size_t)st_node->size_key) == 0)
			return (st_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
