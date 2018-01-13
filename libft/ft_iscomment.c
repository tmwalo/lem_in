/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscomment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 14:02:55 by tmwalo            #+#    #+#             */
/*   Updated: 2017/11/30 14:46:13 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iscomment(char *str)
{
	char	**tokens;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	tokens = ft_strtok(str);
	if (*tokens != '\0')
	{
		if (((*tokens)[0] == '#') && ((*tokens)[1] != '#'))
		{
			free_splitstr(&tokens);
			return (CMT);
		}
	}
	free_splitstr(&tokens);
	return (0);
}
