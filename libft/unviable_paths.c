/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unviable_paths.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 11:38:29 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 14:47:33 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*unviable_paths(t_llst *paths, int start, int end)
{
	t_llst	*cmp_path;
	t_llst	*curr_path;
	t_llst	*unviable_paths;

	if ((paths == NULL) || (start < 0) || (end < 0))
		return (NULL);
	unviable_paths = NULL;
	cmp_path = paths;
	while (cmp_path != NULL)
	{
		curr_path = cmp_path->next;
		while ((curr_path != NULL) && !path_search(cmp_path->value, unviable_paths))
		{
			if (!path_search(curr_path->value, unviable_paths))
			{
				if (paths_cross((t_llst *)cmp_path->value, (t_llst *)curr_path->value, start, end))
				{
					if (!unviable_path(&unviable_paths, (t_llst *)cmp_path->value, (t_llst *)curr_path->value))
						return (NULL);
				}
			}
			curr_path = curr_path->next;
		}
		cmp_path = cmp_path->next;
	}
	return (unviable_paths);
}
