/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_prev_cmd_target.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:31:36 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:37:00 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*find_prev_cmd_target(t_llst *begin, void *value)
{
	t_llst	*current;
	t_llst	*prev;
	t_llst	*cmd_target;
	size_t	size;
	int	matches;

	if ((begin == NULL) || (value == NULL))
		return (NULL);
	cmd_target = NULL;
	matches = 0;
	current = begin;
	prev = NULL;
	while (current != NULL)
	{
		size = sizeof(char) * ft_strlen(value);
		if (ft_memcmp(value, current->value, size) == 0)
		{
			cmd_target = prev;
			++matches;
		}
		if (!ft_iscomment((char *)current->value))
			prev = current;
		current = current->next;
	}
	return ((cmd_target && (matches == 1)) ? cmd_target->value : NULL);
}
