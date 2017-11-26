/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 12:07:38 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/01 16:43:37 by tmwalo           ###   ########.fr       */
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
	int		count;

	i = 0;
	count = 19;
	ft_putstr("original string: ");
	ft_putendl(str);
	ft_bzero(test,7);
	ft_putstr("call ft_zero to set first five bytes to 0: ");
	while (count > 0)
	{
		printf("%c ", charcmp(str[i], test[i]));
		++i;
		--count;
	}
	ft_putchar('\n');
	return (0);
}
