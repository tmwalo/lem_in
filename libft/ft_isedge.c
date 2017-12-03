/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isedge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:03:17 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 17:46:02 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isedge(char *str)
{
	char	**tokens;
	char	**first_token_array;
	int		num_tokens;
	int		error;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	error = 0;
	first_token_array = ft_strsplit(*tokens, '-');
	num_tokens = 0;
	while ((*first_token_array != '\0') && !error)
	{
		++num_tokens;
		if (!ft_isnum(*first_token_array) || (num_tokens > 2))
			error = 1;
		++first_token_array;
	}
	if ((num_tokens > 0) && !ft_iscomment(tokens[1]) && (tokens[1] != '\0'))
		error = 1;
	first_token_array = first_token_array - num_tokens;
	free_splitstr(&first_token_array);
	free_splitstr(&tokens);
	return (((num_tokens <= 1) || error) ? 0 : EDGE);
}
