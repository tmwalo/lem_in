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
	t_llst		*rev_file;
	int		ret;

	file = read_file(0);
	rev_file = llst_rev(file);

	printf("%s\n", (!validate_edges(NULL)) ? "PASS" : "FAIL");

	printf("return: ");
	ret = validate_edges(rev_file);
	printf("%d\n", ret);

	llst_del(&rev_file);
	llst_del(&file);
	return (0);
}
