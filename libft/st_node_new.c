/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_node_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:52:07 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/29 12:20:14 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_st_node	*st_node_new(void *key, int size_k, void *value, int size_v)
{
	t_st_node	*pt_st_node;

	if ((key == NULL) || (size_k <= 0) || (value == NULL) || (size_v <= 0))
		return (NULL);
	pt_st_node = (t_st_node *)malloc(sizeof(t_st_node));
	if (pt_st_node == NULL)
		return (NULL);
	pt_st_node->key = malloc(size_k);
	if (pt_st_node->key == NULL)
		return (NULL);
	ft_memmove(pt_st_node->key, key, size_k);
	pt_st_node->size_key = size_k;
	pt_st_node->value = malloc(size_v);
	if (pt_st_node->value == NULL)
		return (NULL);
	ft_memmove(pt_st_node->value, value, size_v);
	pt_st_node->size_value = size_v;
	return (pt_st_node);
}
