/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscommand_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:30:41 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 14:34:35 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int		ret;

	ret = cmd_chars(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = cmd_chars("");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = cmd_chars("##start");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = cmd_chars("##start #comment");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	ret = cmd_chars("#not a command");
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = cmd_chars("###3hashes");
	printf("%s\n", (ret) ? "PASS" : "FAIL");

	return (0);
}
