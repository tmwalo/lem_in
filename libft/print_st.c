/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_st.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 12:21:13 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:21:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_st(t_llst *pt_st)
{
	t_llst		*current_node;
	t_st_node	*st_node;

	current_node = pt_st;
	ft_putendl("symbol table:");
	while (current_node != NULL)
	{
		st_node = (t_st_node *)current_node->value;
		ft_putstr("key: ");
		ft_putstr((char *)st_node->key);
		ft_putstr(", value: ");
		ft_putnbr(*(int *)st_node->value);
		ft_putstr("\n");
		current_node = current_node->next;
	}
}
