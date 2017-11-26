/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:21:56 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/07 15:04:37 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str1[37] = "Capture the gods, ";
	char	str2[19] = "advance the troops";

	ft_putstr("str1: ");
	ft_putendl(str1);
	ft_putstr("str2: ");
	ft_putendl(str2);
	ft_strncat(str1, str2, 11);
	ft_putstr("strncat with n = 11: ");
	ft_putendl(str1);
	return (0);
}
