/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:26:37 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:44:24 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	const char	*s_end;

	len = ft_strlen(s);
	s_end = s + len;
	while (s_end != s)
	{
		if (*s_end == (char)c)
			return ((char *)s_end);
		--s_end;
	}
	if (*s_end == (char)c)
		return ((char *)s_end);
	return (NULL);
}
