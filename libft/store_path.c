/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:07:08 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 12:07:13 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	store_path(t_llst **all_paths, t_llst *path)
{
	t_llst	*new_node;

	if ((all_paths == NULL) || (path == NULL))
		return (0);
	new_node = llst_new_empty();
	if (new_node == NULL)
	{
		paths_destroy(all_paths);
		return (0);
	}
	new_node->value = path;
	llst_add(all_paths, new_node);
	return (1);
}
