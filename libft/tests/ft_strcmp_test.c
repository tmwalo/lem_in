/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 08:41:59 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/10 08:59:38 by tmwalo           ###   ########.fr       */
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
	printf("str1 cmp str2: %d\n", ft_strcmp(str1, str2));
	printf("str1 cmp str3: %d\n", ft_strcmp(str3, str1));
	printf("str1 cmp str1: %d\n", ft_strcmp(str1, str1));
	return (0);
}
