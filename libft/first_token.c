/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 13:49:45 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 13:49:54 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*first_token(char *str)
{
	char	**tokens;
	char	*first_token;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (NULL);
	tokens = ft_strsplit(str, ' ');
	if (tokens == NULL)
		return (NULL);
	if (*tokens == NULL)
		return (NULL);
	first_token = ft_strdup(*tokens);
	free_splitstr(&tokens);
	if (first_token == NULL)
		return (NULL);
	return (first_token);
}
