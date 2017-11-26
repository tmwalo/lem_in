/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 22:27:09 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/04 22:28:07 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_char_cmp(char s1, char s2)
{
	return (s1 - s2);
}

int		main(void)
{
	char	str[18] = "I am not a sheep!";
	char	*malc;
	int		i;
	int		x;

	i = 17;
	x = 0;
	malc = (char *)ft_strnew(18);
	ft_bzero(malc, 18);
	while (i > 0)
	{
		ft_putchar(ft_char_cmp(str[x], *malc));
		++x;
		++malc;
		--i;
	}
	ft_putchar('\n');
	return (0);
}
