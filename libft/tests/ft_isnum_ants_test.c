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

	ret = ft_isnum_ants(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isnum_ants("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isnum_ants("23989");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isnum_ants("23989 # comment");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isnum_ants("23989 ##command");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isnum_ants("774jhbdfg");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	return (0);
}
