/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvertex_no_coords.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 11:07:53 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/15 11:07:59 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isvertex_no_coords(char *str)
{
	char	**tokens;
	int		ntokens;
	int		error;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	error = 0;
	ntokens = 0;
	while ((*tokens != '\0') && !error)
	{
		++ntokens;
		if ((ntokens == 1) && (ft_iscommand(*tokens) || ft_iscomment(*tokens)))
			error = 1;
		if ((ntokens == 1) && (**tokens == 'L'))
			error = 1;
		if (ntokens == 2)
			error = 1;
		++tokens;
	}
	tokens = tokens - ntokens;
	free_splitstr(&tokens);
	return (((ntokens == 0) || error) ? 0 : VERTX);
}
