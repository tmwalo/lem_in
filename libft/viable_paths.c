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
	t_llst		*copy_unviable_paths;
	t_llst		*pt_viable_paths;
	t_llst		*new_node;
	int			unviable;

	if ((paths == NULL) || (*paths == NULL) || (start < 0) || (end < 0))
		return ;
	pt_unviable_paths = unviable_paths(*paths, start, end);
	if (pt_unviable_paths == NULL)
		return ;
	pt_viable_paths = NULL;
	copy_unviable_paths = pt_unviable_paths;
	while (*paths != NULL)
	{
		unviable = 0;
		pt_unviable_paths = copy_unviable_paths;
		while (pt_unviable_paths != NULL)
		{
			if ((*paths)->value == pt_unviable_paths->value)
			{
				unviable = 1;
				break ;
			}
			pt_unviable_paths = pt_unviable_paths->next;
		}
		if (!unviable)
		{
			new_node = llst_new_empty();
			if (new_node == NULL)
			{
				paths_destroy(&pt_viable_paths);
				return ;
			}
			new_node->value = (*paths)->value;
			llst_add(&pt_viable_paths, new_node);
		}
		*paths = (*paths)->next;
	}
	paths_destroy(paths);
	*paths = pt_viable_paths;
}
