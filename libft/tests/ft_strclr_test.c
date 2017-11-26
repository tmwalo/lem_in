/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 23:26:23 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/05 00:43:33 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		charcmp(char c, char z)
{
	return (c - z);
}

int		main(void)
{
	char	str[20] = "overwrite this line";
	char	test[20] = "overwrite this line";
	int		i;
	int		x;
	int		count;
	int		count2;

	i = 0;
	x = 0;
	count = 19;
	count2 = 19;
	ft_putstr("original string: ");
	ft_putendl(str);
	ft_putstr("test string: ");
	ft_putendl(test);
	ft_putstr("difference between chars of original and test string: ");
	while (count > 0)
	{
		printf("%c ", charcmp(str[i], test[i]));
		++i;
		--count;
	}
	ft_putchar('\n');
	ft_strclr(test);
	ft_putstr("difference between chars of original and test string that's been cleared: ");
	while (count2 > 0)
	{
		printf("%c ", charcmp(str[x], test[x]));
		++x;
		--count2;
	}
	ft_putchar('\n');
	return (0);
}
