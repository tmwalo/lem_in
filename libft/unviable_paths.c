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
	t_llst	*curr_path;
	t_llst	*unviable_paths;

	if ((paths == NULL) || (start < 0) || (end < 0))
		return (NULL);
	unviable_paths = NULL;
	while (paths != NULL)
	{
		curr_path = paths->next;
		while (curr_path && !path_search(paths->value, unviable_paths))
		{
			if (!path_search(curr_path->value, unviable_paths))
			{
				if (paths_cross(paths->value, curr_path->value, start, end))
				{
					if (!unviable_path(&unviable_paths, paths->value, curr_path->value))
						return (NULL);
				}
			}
			curr_path = curr_path->next;
		}
		paths = paths->next;
	}
	return (unviable_paths);
}
