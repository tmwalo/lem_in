/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:22:50 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:23:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	st_put(t_llst **begin, char *key, int value)
{
	t_st_node	*pt_st_node;
	t_llst		*new_node;
	int			len;

	if ((begin == NULL) || (key == NULL) || (value < 0))
		return (0);
	len = (int)ft_strlen(key) + 1;
	pt_st_node = st_node_new(key, len * sizeof(char), &value, sizeof(int));
	if (pt_st_node == NULL)
		return (0);
	new_node = llst_new(pt_st_node, sizeof(t_st_node));
	if (new_node == NULL)
	{
		st_node_delone(&pt_st_node);
		return (0);
	}
	ft_memdel((void **)&(new_node->value));
	new_node->value = pt_st_node;
	llst_add(begin, new_node);
	return (1);
}
