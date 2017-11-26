/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 21:30:28 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/04 21:50:48 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	*str;
	char	**pt_str;

	str = (char *)malloc(10);
	str = "legendary";
	pt_str = &str;
	printf("Before ft_memdel() call - string: %s, pointer: %p, pointer to pointer: %p\n", str, str, pt_str);
	ft_memdel(pt_str);
	printf("After ft_memdel() call - string: %s, pointer: %p, pointer to pointer: %p\n", str, str, pt_str);
	return (0);
}
