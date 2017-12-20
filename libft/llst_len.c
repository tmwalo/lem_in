/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 12:01:51 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 12:03:12 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	llst_len(t_llst *begin)
{
	t_llst		*current_node;
	int			len;

	len = 0;
	current_node = begin;
	while (current_node != NULL)
	{
		++len;
		current_node = current_node->next;
	}
	return (len);
}
