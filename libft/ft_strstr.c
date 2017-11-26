/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:34:38 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:45:15 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*char_haystack;
	size_t	needle_len;

	char_haystack = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return (char_haystack);
	while (*char_haystack != '\0')
	{
		if (ft_strncmp(char_haystack, needle, needle_len) == 0)
			return (char_haystack);
		++char_haystack;
	}
	return (NULL);
}
