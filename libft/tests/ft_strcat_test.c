/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:21:42 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/07 14:31:03 by tmwalo           ###   ########.fr       */
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
	ft_strcat(str1, str2);
	ft_putstr("strcat: ");
	ft_putendl(str1);
	return (0);
}
