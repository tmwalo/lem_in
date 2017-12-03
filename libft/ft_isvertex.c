/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvertex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:03:09 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 15:59:27 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isvertex(char *str)
{
	char	**tokens;
	int		num_tokens;
	int		error;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	error = 0;
	num_tokens = 0;
	while ((*tokens != '\0') && (num_tokens <= 4) && !error)
	{
		++num_tokens;
		if ((num_tokens <= 3) && (!ft_isnum(*tokens)))
			error = 1;
		if ((num_tokens == 4) && (!ft_iscomment(*tokens)))
			error = 1;
		++tokens;
	}
	tokens = tokens - num_tokens;
	free_splitstr(&tokens);
	if ((num_tokens <= 2) || error)
		return (0);
	else
		return (VERTX);
}
