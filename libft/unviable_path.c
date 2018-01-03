/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unviable_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 14:40:18 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 14:41:36 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	unviable_path(t_llst **begin, void *path_x, void *path_y)
{
	t_llst	*new_node;

	if (!begin || !path_x || !path_y)
		return (0);
	new_node = llst_new_empty();
	if (new_node == NULL)
	{
		llst_del(begin);
		return (0);
	}
	if (llst_len((t_llst *)path_x) <= llst_len((t_llst *)path_y))
		new_node->value = path_y;
	else
		new_node->value = path_x;
	llst_add(begin, new_node);
	return (1);
}
