/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_graph_input.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:24:49 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/04 14:20:26 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	validate_graph_input(char *str)
{
	t_graph_input	*validators;
	int				num_funcs;
	int				index;
	t_graph_input	pt_func;
	int				passed;

	num_funcs = VALIDATORS + 1;
	validators = (t_graph_input *)malloc(sizeof(t_graph_input) * num_funcs);
	if (validators == NULL)
		return (0);
	init_validators(validators);
	passed = 0;
	index = 1;
	while ((index < num_funcs) && (passed != 2))
	{
		pt_func = *(validators + index);
		if (pt_func(str))
			++passed;
		++index;
	}
	ft_memdel((void **)&validators);
	if (passed >= 2)
		return (1);
	return (0);
}
