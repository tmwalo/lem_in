/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:24:37 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:24:40 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	st_destroy(t_llst **alst)
{
	t_llst	*current_node;
	t_llst	*next_node;

	if (alst == NULL)
		return ;
	current_node = *alst;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		if (current_node->value != NULL)
			st_node_delone((t_st_node **)&(current_node->value));
		free(current_node);
		current_node = next_node;
	}
	*alst = NULL;
}
