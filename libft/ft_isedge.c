/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isedge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:03:17 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:04:36 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isedge(char *str)
{
	char	**tokens;
	char	**token1;
	int		ntokens;
	int		error;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	error = 0;
	token1 = ft_strsplit(*tokens, '-');
	ntokens = 0;
	while ((*token1 != '\0') && !error)
	{
		++ntokens;
		if (ft_iscommand(*token1) || ft_iscomment(*token1) || (ntokens > 2))
			error = 1;
		++token1;
	}
	if ((ntokens > 0) && !ft_iscomment(tokens[1]) && (tokens[1] != '\0'))
		error = 1;
	token1 = token1 - ntokens;
	free_splitstr(&token1);
	free_splitstr(&tokens);
	return (((ntokens <= 1) || error) ? 0 : EDGE);
}
