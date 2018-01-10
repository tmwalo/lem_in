/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_del_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:52:01 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/10 12:55:15 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	llst_del_nodes(t_llst **alst)
{
	t_llst	*current_node;
	t_llst	*next_node;

	if (alst == NULL)
		return ;
	current_node = *alst;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*alst = NULL;
}
