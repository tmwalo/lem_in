/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:18:14 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:25:47 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*original_dest;
	int		dest_len;

	original_dest = dest;
	dest_len = ft_strlen(dest);
	dest = dest + dest_len;
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (original_dest);
}
