/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isedge_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:14:21 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 17:48:02 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int		ret;

	ret = ft_isedge(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("12-764");
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	ret = ft_isedge("12-764-9874");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("12");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("12-cat");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("12-");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("12-764 #this is a comment");
	printf("%s\n", (ret == 1) ? "PASS" : "FAIL");

	ret = ft_isedge("12-87 ##command");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("12-87 this is not a comment");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_isedge("------------");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	return (0);
}
