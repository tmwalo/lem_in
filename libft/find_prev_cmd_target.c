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
	size_t	size;

	if ((begin == NULL) || (value == NULL))
		return (NULL);
	current = begin;
	prev = NULL;
	while (current != NULL)
	{
		if (current != begin)
		{
			size = sizeof(char) * ft_strlen(value);
			if ((ft_memcmp(value, current->value, size) == 0) && prev)
				return (prev->value);
			if (!ft_iscomment((char *)current->value))
				prev = current;
		}
		current = current->next;
	}
	return (NULL);
}
