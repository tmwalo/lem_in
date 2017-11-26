/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:35:00 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:18:41 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*char_s;
	unsigned char		uns_c;

	char_s = (unsigned char *)s;
	uns_c = (unsigned char)c;
	while (n > 0)
	{
		if (*char_s == uns_c)
			return (char_s);
		++char_s;
		--n;
	}
	return (NULL);
}
