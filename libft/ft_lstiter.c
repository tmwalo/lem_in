/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:44:51 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:16:07 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*current_node;

	current_node = lst;
	if (f == NULL)
		return ;
	while (current_node != NULL)
	{
		f(current_node);
		current_node = current_node->next;
	}
}
