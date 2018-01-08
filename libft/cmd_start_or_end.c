/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_start_or_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:24:06 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/08 17:04:07 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		cmd_start_or_end(char *cmd)
{
	char	**tokens;
	int		is_start_or_end;

	if ((cmd == NULL) || (ft_strlen(cmd) == 0))
		return (0);
	is_start_or_end = 0;
	tokens = ft_strtok(cmd);
	if (ft_strcmp(*tokens, "##start") == 0)
		is_start_or_end = 1;
	else if (ft_strcmp(*tokens, "##end") == 0)
		is_start_or_end = 1;
	free_splitstr(&tokens);
	if (is_start_or_end)
		return (1);
	else
		return (0);
}
