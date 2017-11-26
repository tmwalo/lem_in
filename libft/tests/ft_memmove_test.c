/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:20:17 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/06 12:56:38 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		str[25] = "Empower the darkest yin.";
	char			copy[25];
	
	ft_putstr("original string: ");
	ft_putendl(str);
	ft_putstr("call to memmove without overlapping memory blocks: ");
	ft_memmove(copy, str, 25);
	ft_putendl(copy);
	ft_putstr("call to memmove with overlapping memory blocks: ");
	ft_memmove(str + 4, str, 25);
	ft_putendl(str + 4);
	return (0);
}
