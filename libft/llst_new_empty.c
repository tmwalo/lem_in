/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_new_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 11:39:03 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 11:39:08 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_llst	*llst_new_empty(void)
{
	t_llst	*pt_lst;

	pt_lst = (t_llst *)malloc(sizeof(t_llst));
	if (pt_lst != NULL)
		pt_lst->next = NULL;
	return (pt_lst);
}
