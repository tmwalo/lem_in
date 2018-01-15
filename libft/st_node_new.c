/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_node_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:52:07 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/15 11:17:06 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_st_node	*st_node_new(void *key, int size_k, void *value, int size_v)
{
	t_st_node	*pt_st_node;
	int			error;

	if ((key == NULL) || (size_k <= 0) || (value == NULL) || (size_v <= 0))
		return (NULL);
	pt_st_node = (t_st_node *)malloc(sizeof(t_st_node));
	if (pt_st_node == NULL)
		return (NULL);
	error = 0;
	if ((pt_st_node->key = malloc(size_k)) == NULL)
		error = 1;
	ft_memmove(pt_st_node->key, key, size_k);
	pt_st_node->size_key = size_k;
	if ((pt_st_node->value = malloc(size_v)) == NULL)
		error = 1;
	ft_memmove(pt_st_node->value, value, size_v);
	pt_st_node->size_value = size_v;
	if (error)
	{
		st_node_delone(&pt_st_node);
		return (NULL);
	}
	return (pt_st_node);
}
