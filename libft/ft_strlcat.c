/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 09:06:50 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:30:59 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*original_dst;
	const char	*original_src;
	size_t		original_size;
	size_t		dst_len;
	size_t		remaining_space;

	original_dst = dst;
	original_src = src;
	original_size = size;
	while ((*dst != '\0') && (size > 0))
	{
		++dst;
		--size;
	}
	dst_len = dst - original_dst;
	remaining_space = original_size - dst_len;
	if (remaining_space == 0)
		return (dst_len + ft_strlen(original_src));
	while ((*src != '\0') && (remaining_space > 1))
	{
		*dst++ = *src++;
		--remaining_space;
	}
	*dst = '\0';
	return (dst_len + ft_strlen(original_src));
}
