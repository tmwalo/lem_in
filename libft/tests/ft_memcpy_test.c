/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 12:41:42 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/03 12:41:46 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 
int	main(void)
{
	char		str[28] = "Now, fear the mighty Bison.";
	char		copy[28];
	
	ft_putstr("Original string: ");
	ft_putendl(str);
	ft_putstr("Copy 9 bytes of original string to new array: ");
	ft_bzero(copy, 28);
	ft_memcpy(copy, str, 9);
	ft_putendl(copy);
	return (0);
}
