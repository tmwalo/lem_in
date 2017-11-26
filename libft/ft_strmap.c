/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:38:13 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:32:50 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*map_str;
	char	*original_map_str;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = ft_strlen(s);
	map_str = (char *)malloc(sizeof(*map_str) * (len + 1));
	original_map_str = map_str;
	if (map_str != NULL)
	{
		while (len > 0)
		{
			*map_str = f(*s);
			++map_str;
			++s;
			--len;
		}
		*map_str = '\0';
	}
	return (original_map_str);
}
