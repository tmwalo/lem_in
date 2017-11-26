/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 11:54:25 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/28 11:54:29 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_push_ll(t_stack_ll *stack, void const *content, size_t len)
{
	t_list	*pt_node;

	if (stack != NULL)
	{
		pt_node = ft_lstnew(content, len);
		if (pt_node == NULL)
			return (0);
		ft_lstadd(&(stack->begin_list), pt_node);
		++(stack->size);
		return (1);
	}
	else
		return (0);
}
