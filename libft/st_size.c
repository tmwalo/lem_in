/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:23:30 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:24:58 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	st_size(t_llst *begin)
{
	t_llst		*current_node;
	int			size;

	size = 0;
	current_node = begin;
	while (current_node != NULL)
	{
		++size;
		current_node = current_node->next;
	}
	return (size);
}
