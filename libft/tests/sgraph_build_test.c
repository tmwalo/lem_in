/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_build_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:07:16 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/09 10:46:23 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_llst		*rev_file;
	t_sgraph	*pt_sgraph;

	file = read_file(0);
	rev_file = llst_rev(file);
	if (file)
	{
		pt_sgraph = sgraph_build(file, rev_file);
		if (pt_sgraph)
		{
			sgraph_print(pt_sgraph);
			sgraph_destroy(&pt_sgraph);
		}
		else
			printf("Error - Graph building failed\n");
	}
	else
		printf("Error - File reading failed\n");
	llst_del(&rev_file);
	llst_del(&file);
	return (0);
}
