/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 13:35:29 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/03 13:44:49 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	str1[] = "I am not a sheep...";
	char	str2[] = "";

	printf("%s : len = %lu\n", str1, ft_strlen(str1));
	printf("%s : len = %lu\n", str2, ft_strlen(str2));
	return (0);
}
