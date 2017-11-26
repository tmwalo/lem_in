/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 12:42:31 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:20:38 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*char_src;
	char			*char_dest;
	size_t			index;

	char_src = (const char *)src;
	char_dest = (char *)dest;
	if (char_src < char_dest)
	{
		index = n - 1;
		while (n > 0)
		{
			char_dest[index] = char_src[index];
			--index;
			--n;
		}
	}
	else
		ft_memcpy(char_dest, char_src, n);
	return (char_dest);
}
