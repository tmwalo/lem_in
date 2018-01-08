/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_start_or_end_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 17:04:55 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 17:10:57 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	printf("%s\n", (!cmd_start_or_end(NULL)) ? "PASS" : "FAIL");

	printf("%s\n", (!cmd_start_or_end("")) ? "PASS" : "FAIL");

	printf("%s\n", (!cmd_start_or_end("##")) ? "PASS" : "FAIL");

	printf("%s\n", (!cmd_start_or_end("random words")) ? "PASS" : "FAIL");

	printf("%s\n", (cmd_start_or_end("##start")) ? "PASS" : "FAIL");

	printf("%s\n", (cmd_start_or_end("##end")) ? "PASS" : "FAIL");

	return (0);
}
