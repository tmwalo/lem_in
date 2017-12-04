/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sgraph_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:48:33 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:49:53 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_sgraph	sgraph;
	t_sgraph	*pt_sgraph;

	pt_sgraph = &sgraph;

	init_sgraph(pt_sgraph, 11, "three", "nine");

	printf("%s\n", (pt_sgraph->st_begin == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (pt_sgraph->pt_graph) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp(pt_sgraph->start, "three") == 0) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp(pt_sgraph->end, "nine") == 0) ? "PASS" : "FAIL");

	return (0);
}
