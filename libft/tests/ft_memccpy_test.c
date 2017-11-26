/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 12:36:34 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/03 12:39:11 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char		str[30] = "Set upon the frosted heavens.";
	char		no_match[30];
	char		match[30];
	
	ft_putstr("call to memccpy() with c = 'Z' (no match): ");
	ft_bzero(no_match, 30);
	ft_memccpy(no_match, str, 'Z', 29);
	ft_putendl(no_match);
	ft_putstr("call to memccpy() with c = 'f' (match): ");
	ft_bzero(match, 30);
	ft_memccpy(match, str, 'f', 21);
	ft_putendl(match);
	
	return (0);
}
