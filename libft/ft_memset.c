/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 12:10:43 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:20:58 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*s_char_pt;

	s_char_pt = (unsigned char *)s;
	while (n > 0)
	{
		*s_char_pt = c;
		++s_char_pt;
		--n;
	}
	return (s);
}
