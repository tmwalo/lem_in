/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unviable_paths.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 11:38:29 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/09 13:55:08 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*unviable_paths(t_llst *paths, int start, int end)
{
	t_llst	*curr_path;
	t_llst	*bad_paths;
	int		curr_path_unviable;
	int		cross;

	if ((paths == NULL) || (start < 0) || (end < 0))
		return (NULL);
	bad_paths = NULL;
	while (paths != NULL)
	{
		curr_path = paths->next;
		while (curr_path && !path_search(paths->value, bad_paths))
		{
			curr_path_unviable = path_search(curr_path->value, bad_paths);
			cross = paths_cross(paths->value, curr_path->value, start, end);
			if (!curr_path_unviable && cross)
			{
				if (!unviable_path(&bad_paths, paths->value, curr_path->value))
					return (NULL);
			}
			curr_path = curr_path->next;
		}
		paths = paths->next;
	}
	return (bad_paths);
}
