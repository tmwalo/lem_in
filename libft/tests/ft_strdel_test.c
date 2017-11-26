/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 22:33:37 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/04 22:34:32 by tmwalo           ###   ########.fr       */
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
	ft_strdel(pt_str);
	printf("After ft_memdel() call - string: %s, pointer: %p, pointer to pointer: %p\n", str, str, pt_str);
	return (0);
}
