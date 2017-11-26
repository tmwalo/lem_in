/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 20:38:37 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:33:05 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*map_str;
	char			*original_map_str;
	unsigned int	i;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = ft_strlen(s);
	map_str = (char *)malloc(sizeof(*map_str) * (len + 1));
	original_map_str = map_str;
	i = 0;
	if (map_str != NULL)
	{
		while (len > 0)
		{
			*map_str = f(i, *s);
			++map_str;
			++s;
			++i;
			--len;
		}
		*map_str = '\0';
	}
	return (original_map_str);
}
