/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscomment_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:42:37 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 14:44:34 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int		ret;

	ret = ft_iscomment(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_iscomment("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_iscomment("##start");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = ft_iscomment("#is a command");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_iscomment(" 	#is 	a   command		");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = ft_iscomment("###3hashes");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	return (0);
}
