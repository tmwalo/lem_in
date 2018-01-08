/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_rev.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:26:07 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 16:18:46 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*llst_rev(t_llst *pt_begin)
{
	t_llst	*current_node;
	t_llst	*pt_begin_rev;
	t_llst	*new_node;
	int		error;
	size_t	size;

	error = 0;
	pt_begin_rev = NULL;
	current_node = pt_begin;
	while ((current_node != NULL) && !error)
	{
		size = sizeof(char) * (ft_strlen((char *)current_node->value) + 1);
		new_node = llst_new(current_node->value, size);
		if (new_node == NULL)
			error = 1;
		llst_add(&pt_begin_rev, new_node);
		current_node = current_node->next;
	}
	if (error)
	{
		llst_del(&pt_begin_rev);
		return (NULL);
	}
	return (pt_begin_rev);
}
