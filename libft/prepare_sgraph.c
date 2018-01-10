/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_sgraph.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 12:49:19 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/10 12:49:24 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sgraph	*prepare_sgraph(void)
{
	t_llst		*file;
	t_llst		*rev_file;
	t_sgraph	*sgraph;

	file = read_file(0);
	if (file == NULL)
		return (NULL);
	rev_file = llst_rev(file);
	if (rev_file == NULL)
		return (NULL);
	sgraph = sgraph_build(file, rev_file);
	llst_del(&rev_file);
	llst_del(&file);
	return (sgraph);
}
