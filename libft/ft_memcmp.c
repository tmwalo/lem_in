/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:58:45 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:19:03 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*uchar_s1;
	const unsigned char		*uchar_s2;

	uchar_s1 = (const unsigned char *)s1;
	uchar_s2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*uchar_s1 == *uchar_s2)
		{
			++uchar_s1;
			++uchar_s2;
			--n;
		}
		else
			return ((*uchar_s1) - (*uchar_s2));
	}
	return (0);
}
