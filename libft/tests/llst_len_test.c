/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_len_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 12:05:29 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/20 12:18:46 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst	*pt_begin;
	t_llst	*new_node;
	char	*str;
	int		ret;

	pt_begin = NULL;
	str = "cheese";
	new_node = llst_new(str, sizeof(char) * ft_strlen(str));
	llst_add(&pt_begin, new_node);
	str = "moonlight";
	new_node = llst_new(str, sizeof(char) * ft_strlen(str));
	llst_add(&pt_begin, new_node);
	str = "capture the gods";
	new_node = llst_new(str, sizeof(char) * ft_strlen(str));
	llst_add(&pt_begin, new_node);

	ret = llst_len(NULL);
	printf("%s\n", (ret == 0) ? "PASS" : "FAIL");

	ret = llst_len(pt_begin);
	printf("%s\n", (ret == 3) ? "PASS" : "FAIL");

	return (0);
}
