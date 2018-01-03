/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 11:51:29 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 12:24:14 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	paths_destroy(t_llst **paths)
{
	if (paths == NULL)
		return ;
	while (*paths != NULL)
	{
		llst_del((t_llst **)(&((*paths)->value)));
		*paths = (*paths)->next;
	}
	llst_del(paths);
}
