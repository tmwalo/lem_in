/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:21:15 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/07 11:26:13 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[35] = "Down with Ulfric, killer of kings.";
	char	copy[35];

	ft_putstr("Original string: ");
	ft_putendl(str);
	ft_strcpy(copy, str);
	ft_putstr("Call string copy: ");
	ft_putendl(copy);
	return (0);
}
