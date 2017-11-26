/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:18:31 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:37:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*original_dest;
	int		dest_len;

	original_dest = dest;
	dest_len = ft_strlen(dest);
	dest = dest + dest_len;
	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		++dest;
		++src;
		--n;
	}
	*dest = '\0';
	return (original_dest);
}
