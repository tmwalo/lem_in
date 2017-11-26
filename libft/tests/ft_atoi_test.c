/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 11:09:42 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/08 11:15:13 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	char	str[] = "-7390";
	int		conversion;

	ft_putstr("str: ");
	ft_putendl(str);
	ft_putstr("call ft_atoi(str): ");
	conversion = ft_atoi(str);
	printf("%d\n", conversion);
	return (0);
}
