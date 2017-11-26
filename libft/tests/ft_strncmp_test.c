/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 09:19:04 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/15 11:36:13 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	str1[] = "Step into the void.";
	char	str2[] = "The thing about life is...";
	char	str3[] = "The thing that was, isn't.";

	ft_putendl(str1);
	ft_putendl(str2);
	ft_putendl(str3);
	printf("str1 cmp str2: %d\n", ft_strncmp(str1, str2, 9));
	printf("str1 cmp str3: %d\n", ft_strncmp(str3, str1, 5));
	printf("str2 cmp str3: %d\n", ft_strncmp(str2, str3, 9));
	printf("abc cmp abcde, first 3 chars: %d\n", ft_strncmp("abc", "abcde", 3));
	return (0);
}
