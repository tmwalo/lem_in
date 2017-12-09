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
	int		ret;

	pt_sgraph = &sgraph;

	ret = init_sgraph(NULL, 11, "three", "nine");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = init_sgraph(pt_sgraph, -98, "three", "nine");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = init_sgraph(pt_sgraph, 11, NULL, "nine");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = init_sgraph(pt_sgraph, 11, "three", NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = init_sgraph(pt_sgraph, 11, "three", "nine");
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	printf("%s\n", (pt_sgraph->st_begin == NULL) ? "PASS" : "FAIL");

	printf("%s\n", (pt_sgraph->pt_graph) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp(pt_sgraph->start, "three") == 0) ? "PASS" : "FAIL");

	printf("%s\n", (ft_strcmp(pt_sgraph->end, "nine") == 0) ? "PASS" : "FAIL");

	return (0);
}
