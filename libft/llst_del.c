/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:40:13 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/27 10:40:15 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	llst_del(t_llst **alst)
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
			free(current_node->value);
		free(current_node);
		current_node = next_node;
	}
	*alst = NULL;
}
