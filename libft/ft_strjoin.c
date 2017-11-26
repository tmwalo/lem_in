/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:03:20 by tmwalo            #+#    #+#             */
/*   Updated: 2017/08/24 15:30:32 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	cat = (char *)malloc(sizeof(*cat) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (cat != NULL)
	{
		ft_strcpy(cat, s1);
		ft_strcat(cat, s2);
	}
	return (cat);
}
