/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_delone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:39:57 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/27 10:43:38 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	llst_delone(t_llst **alst)
{
	if ((alst != NULL) && (*alst != NULL))
	{
		if ((*alst)->value != NULL)
			free((*alst)->value);
		free(*alst);
		*alst = NULL;
	}
}
