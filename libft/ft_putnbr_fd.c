/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:04:53 by tmwalo            #+#    #+#             */
/*   Updated: 2017/09/07 11:12:56 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_digits_and_sign(int n)
{
	int				len;
	unsigned int	uns_n;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		uns_n = (unsigned int)(-n);
		++len;
	}
	else
		uns_n = (unsigned int)n;
	while (uns_n > 0)
	{
		++len;
		uns_n = uns_n / 10;
	}
	return (len);
}

static void		ft_stack_mem_itoa(int n, char *s)
{
	int				len;
	int				index;
	unsigned int	uns_n;

	len = ft_digits_and_sign(n);
	if (n < 0)
		uns_n = (unsigned int)(-n);
	else
		uns_n = (unsigned int)n;
	index = len;
	s[index--] = '\0';
	s[index--] = (uns_n % 10) + '0';
	while ((uns_n = uns_n / 10) > 0)
		s[index--] = (uns_n % 10) + '0';
	if (n < 0)
		s[index] = '-';
}

void			ft_putnbr_fd(int n, int fd)
{
	char	str[ft_digits_and_sign(n) + 1];

	ft_stack_mem_itoa(n, str);
	ft_putstr_fd(str, fd);
}
