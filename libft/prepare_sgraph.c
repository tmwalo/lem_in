/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_sgraph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:49:19 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/10 17:25:23 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sgraph	*prepare_sgraph(t_llst **rev_file)
{
	t_llst		*file;
	t_sgraph	*sgraph;

	if (rev_file == NULL)
		return (NULL);
	file = read_file(0);
	if (file == NULL)
		return (NULL);
	*rev_file = llst_rev(file);
	if (*rev_file == NULL)
	{
		llst_del(&file);
		return (NULL);
	}
	sgraph = sgraph_build(file, *rev_file);
	if (sgraph == NULL)
		llst_del(rev_file);
	llst_del(&file);
	return (sgraph);
}
