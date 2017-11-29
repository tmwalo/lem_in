/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_node_delone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:48:21 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/29 12:50:55 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	st_node_delone(t_st_node **alst)
{
	if ((alst != NULL) && (*alst != NULL))
	{
		if ((*alst)->key != NULL)
			free((*alst)->key);
		if ((*alst)->value != NULL)
			free((*alst)->value);
		free(*alst);
		*alst = NULL;
	}
}
