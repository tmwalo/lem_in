/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_search.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 11:37:01 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 11:37:03 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	path_search(t_llst *search_path, t_llst *paths)
{
	t_llst	*current_node;
	t_llst	*current_path;

	if ((search_path == NULL) || (paths == NULL))
		return (0);
	current_node = paths;
	while (current_node != NULL)
	{
		current_path = current_node->value;
		if (current_path == search_path)
			return (1);
		current_node = current_node->next;
	}
	return (0);
}
