/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscommand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:02:46 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 14:30:05 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iscommand(char *str)
{
	char	**tokens;
	int		ntokens;
	int		error;
	int		start_or_end;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	error = 0;
	start_or_end = 1;
	ntokens = 0;
	while ((*tokens != '\0') && (ntokens <= 2) && !error && start_or_end)
	{
		++ntokens;
		if ((ntokens == 1) && (!cmd_chars(*tokens)))
			error = 1;
		if ((ntokens == 1) && !cmd_start_or_end(*tokens))
			start_or_end = 0;
		if ((ntokens == 2) && (!ft_iscomment(*tokens)))
			error = 1;
		++tokens;
	}
	tokens = tokens - ntokens;
	free_splitstr(&tokens);
	return (((ntokens == 0) || error) ? 0 : CMD);
}
