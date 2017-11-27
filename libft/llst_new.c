/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:39:30 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/27 10:43:04 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*llst_new(void *value, size_t size)
{
	t_llst	*pt_lst;

	pt_lst = (t_llst *)malloc(sizeof(t_llst));
	if (pt_lst != NULL)
	{
		pt_lst->value = malloc(size);
		if (pt_lst->value != NULL)
			ft_memmove(pt_lst->value, value, size);
		pt_lst->next = NULL;
	}
	return (pt_lst);
}
