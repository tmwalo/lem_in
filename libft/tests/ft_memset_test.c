/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 12:45:38 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/30 15:42:26 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	str[] = "overwrite this line";

	ft_putstr("original string: ");
	ft_putendl(str);
	ft_putstr("memset with n = 0 bytes: ");
	ft_memset(str,'x',0);
	ft_putendl(str);
	ft_memset(str,'x',19);
	ft_putstr("memset with x: ");
	ft_putendl(str);
	ft_memset(str,51,19);
	ft_putstr("memset with int 51: ");
	ft_putendl(str);
	ft_memset(str,-111,19);
	ft_putstr("memset with int -111: ");
	ft_putendl(str);
	ft_memset(str,1000,19);
	ft_putstr("memset with int 1000: ");
	ft_putendl(str);
	ft_putstr("memset with NULL pointer: ");
	ft_memset(NULL,'y',8);
	ft_putendl(str);
	return (0);
}
