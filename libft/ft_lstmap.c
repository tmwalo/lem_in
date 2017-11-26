/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 11:18:08 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:16:33 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*begin_lst;
	t_list		*current_node;
	t_list		*prev_node;
	int			first_loop;

	if (f == NULL)
		return (NULL);
	begin_lst = NULL;
	first_loop = 0;
	while (lst != NULL)
	{
		current_node = f(lst);
		if (current_node == NULL)
			return (NULL);
		if (first_loop == 0)
		{
			first_loop = 1;
			begin_lst = current_node;
		}
		else
			prev_node->next = current_node;
		prev_node = current_node;
		lst = lst->next;
	}
	return (begin_lst);
}
