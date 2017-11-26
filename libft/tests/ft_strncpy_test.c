/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:09:34 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/07 15:00:43 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_bytes(char *str, size_t n)
{
	while (n > 0)
	{
		if (*str == '\0')
			ft_putchar('*');
		else
			ft_putchar(*str);
		++str;
		--n;
	}
}

int	main(void)
{
	char	str[20] = "What do you desire?";
	char	copy[25];

	ft_putstr("Original string: ");
	ft_putendl(str);
	ft_strncpy(copy, str, 25);
	ft_putstr("Copy string into buffer with +5 size(6 total null chars): ");
	ft_putendl(copy);
	ft_putstr_bytes(copy, 25);
	ft_putchar('\n');
	return (0);
}
