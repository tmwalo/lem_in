/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 12:18:02 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:18:20 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char		*char_src;
	unsigned char			*char_dest;
	unsigned char			u_char_c;

	char_src = (const unsigned char *)src;
	char_dest = (unsigned char *)dest;
	u_char_c = (unsigned char)c;
	while (n > 0)
	{
		*char_dest = *char_src;
		if (*char_dest == u_char_c)
			return (char_dest + 1);
		++char_src;
		++char_dest;
		--n;
	}
	return (NULL);
}
