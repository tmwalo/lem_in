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
	char	**words;
	int		num_words;

	if ((str == NULL) || (ft_strlen(str) == 0))
		return (0);
	words = ft_strsplit(str, ' ');
	if (!(*words))
		return (0);
	num_words = 0;
	while (*words != '\0')
	{
		if ((num_words < 3) && (ft_isnum(*words) == 0))
			return (0);
		if ((num_words == 3) && (ft_iscomment(*words) == 0))
			return (0);
		if (num_words == 3)
			break ;
		++num_words;
		++words;
	}
	if (num_words < 3)
		return (0);
	else
		return (1);
}
