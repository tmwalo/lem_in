/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sgraph_build_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:07:16 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 16:19:42 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_llst		*file;
	t_llst		*rev_file;
	t_llst		*current_node;

	file = read_file(0);
	printf("%s\n\n", (llst_rev(NULL) == NULL) ? "PASS" : "FAIL");

	current_node = file;
	while (current_node)
	{
		ft_putendl((char *)current_node->value);
		current_node = current_node->next;
	}

	rev_file = llst_rev(file);
	printf("\nREVERSED LIST:\n");
	current_node = rev_file;
	while (current_node)
	{
		ft_putendl((char *)current_node->value);
		current_node = current_node->next;
	}

	llst_del(&rev_file);
	llst_del(&file);
	return (0);
}
