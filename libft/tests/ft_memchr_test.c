/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:58:11 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/03 13:58:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char		str[30] = "Reduce all creation to ashes.";
	unsigned char	o_pt;
	
	ft_putstr("original string: ");
	ft_putendl(str);
	ft_putstr("search for 'o' and print string from that pointer position: ");
	o_pt = ft_memchr(str, 'o', 29);
	ft_putendl(o_pt);
	
	return (0);
}
