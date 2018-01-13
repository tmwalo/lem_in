/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvertex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:03:09 by tmwalo            #+#    #+#             */
/*   Updated: 2017/12/11 12:09:02 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isvertex(char *str)
{
	char	**tokens;
	int		ntokens;
	int		error;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	error = 0;
	ntokens = 0;
	while ((*tokens != '\0') && (ntokens <= 4) && !error)
	{
		++ntokens;
		if ((ntokens == 1) && (ft_iscommand(*tokens) || ft_iscomment(*tokens)))
			error = 1;
		if ((ntokens == 1) && (**tokens == 'L'))
			error = 1;
		if ((ntokens >= 2) && (ntokens <= 3) && (!ft_isnum(*tokens)))
			error = 1;
		if ((ntokens == 4) && (!ft_iscomment(*tokens)))
			error = 1;
		++tokens;
	}
	tokens = tokens - ntokens;
	free_splitstr(&tokens);
	return (((ntokens <= 2) || error) ? 0 : VERTX);
}
