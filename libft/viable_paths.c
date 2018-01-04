/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viable_paths.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 11:42:00 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 13:10:52 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	viable_paths(t_llst **paths, int start, int end)
{
	t_llst		*pt_unviable_paths;
	t_llst		*pt_viable_paths;

	if ((paths == NULL) || (*paths == NULL) || (start < 0) || (end < 0))
		return ;
	pt_unviable_paths = unviable_paths(*paths, start, end);
	if (pt_unviable_paths == NULL)
		return ;
	pt_viable_paths = NULL;
	while (*paths != NULL)
	{
		if (is_viable(*paths, pt_unviable_paths))
		{
			if (!store_path(&pt_viable_paths, (*paths)->value))
			{
				paths_destroy(&pt_unviable_paths);
				paths_destroy(&pt_viable_paths);
				return ;
			}
		}
		*paths = (*paths)->next;
	}
	paths_destroy(&pt_unviable_paths);
	paths_destroy(paths);
	*paths = pt_viable_paths;
}
