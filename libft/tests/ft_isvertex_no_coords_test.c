/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvertex_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:02:16 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 16:40:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int		ret;

	ret = ft_isvertex_no_coords(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("12");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("L33");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("room12-room27");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("#start");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("# comment");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("12 764 87");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("12 #this is a comment");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isvertex_no_coords("                ");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	return (0);
}
