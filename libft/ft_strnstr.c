/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 01:52:48 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:42:35 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*char_big;
	char	*max_char_big;
	size_t	little_len;

	char_big = (char *)big;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return (char_big);
	max_char_big = char_big + (len - little_len) + 1;
	while ((*char_big != '\0') && (char_big < max_char_big))
	{
		if (ft_strncmp(char_big, little, little_len) == 0)
			return (char_big);
		++char_big;
	}
	return (NULL);
}
