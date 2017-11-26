/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_ll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 11:54:42 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/28 16:19:26 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_pop_ll(t_stack_ll *stack)
{
	t_list	*old_begin_list;

	if ((stack != NULL) && (!ft_stack_check_empty_ll(stack)))
	{
		old_begin_list = stack->begin_list;
		stack->begin_list = old_begin_list->next;
		--(stack->size);
		return (old_begin_list);
	}
	else
		return (0);
}
