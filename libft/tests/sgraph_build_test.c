/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_build_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:07:16 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 15:16:47 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_sgraph	*pt_sgraph;

	file = read_file(0);
	if (file)
	{
		pt_sgraph = sgraph_build(file);
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
	llst_del(&file);
	return (0);
}
