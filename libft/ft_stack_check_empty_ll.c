/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_check_empty_ll.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 11:02:32 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/28 11:45:21 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stack_check_empty_ll(t_stack_ll *stack)
{
	if ((stack != NULL) && (stack->begin_list != NULL))
		return (0);
	else
		return (1);
}
