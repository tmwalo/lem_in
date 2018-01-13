/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_build_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:07:16 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/10 17:26:53 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_sgraph	*sgraph;
	t_llst		*file;

	file = NULL;
	sgraph = prepare_sgraph(&file);
	if (sgraph)
	{
		sgraph_print(sgraph);
		llst_del(&file);
		sgraph_destroy(&sgraph);
	}
	else
		printf("Error - Graph preparation failed\n");
	return (0);
}
