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
	t_llst		*current_node;
	t_llst		*next_node;

	if ((paths == NULL) || (*paths == NULL) || (start < 0) || (end < 0))
		return ;
	pt_unviable_paths = unviable_paths(*paths, start, end);
	if (pt_unviable_paths == NULL)
		return ;
	current_node = pt_unviable_paths;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		path_delete(paths, (t_llst *)current_node->value);
		current_node = next_node;
	}
	llst_del_nodes(&pt_unviable_paths);
}
