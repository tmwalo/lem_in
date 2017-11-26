/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 08:06:16 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/10 08:11:27 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str1[29] = "Capture the gods, ";
	char	str2[19] = "advance the troops";

	ft_putstr("str1: ");
	ft_putendl(str1);
	ft_putstr("str2: ");
	ft_putendl(str2);
	ft_strlcat(str1, str2, 29);
	ft_putstr("strlcat: ");
	ft_putendl(str1);
	return (0);
}
