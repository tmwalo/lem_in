/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 16:04:12 by tmwalo            #+#    #+#             */
/*   Updated: 2017/09/07 10:26:14 by tmwalo           ###   ########.fr       */
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

char			*ft_itoa(int n)
{
	int				len;
	int				index;
	char			*str;
	unsigned int	uns_n;

	len = ft_digits_and_sign(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		uns_n = (unsigned int)(-n);
	else
		uns_n = (unsigned int)n;
	index = len - 1;
	str[index--] = (uns_n % 10) + '0';
	while ((uns_n = uns_n / 10) > 0)
		str[index--] = (uns_n % 10) + '0';
	if (n < 0)
		str[index] = '-';
	return (str);
}
