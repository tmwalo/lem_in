/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:30:23 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/06 16:36:47 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while ((*dest = *src) != '\0')
	{
		++dest;
		++src;
	}
	return (original_dest);
}
