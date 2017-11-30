/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:06:16 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 14:23:06 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int		ret;

	ret = ft_isnum(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isnum("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isnum("23989");
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	ret = ft_isnum("774jhbdfg");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	return (0);
}
