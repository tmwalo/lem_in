/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:03:45 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:46:42 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_white_space(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t'))
		return (1);
	else
		return (0);
}

static int		ft_only_white_space(char const *s)
{
	int		only_white_space;

	only_white_space = 1;
	while (*s != '\0')
	{
		if (!ft_is_white_space(*s))
			only_white_space = 0;
		++s;
	}
	return (only_white_space);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;
	char			*trimstr;
	unsigned int	len;

	if (s == NULL)
		return (NULL);
	if ((ft_strlen(s) == 0) || ft_only_white_space(s))
	{
		trimstr = ft_strnew(0);
		return (trimstr);
	}
	i = 0;
	while ((i < ft_strlen(s)) && ft_is_white_space(s[i]))
		++i;
	start = i;
	i = ft_strlen(s) - 1;
	while (((i > 0) || (i == 0)) && ft_is_white_space(s[i]))
		--i;
	end = i;
	len = end - start + 1;
	trimstr = ft_strsub(s, start, len);
	return (trimstr);
}
