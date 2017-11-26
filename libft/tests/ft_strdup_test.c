/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:20:59 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/07 11:21:04 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[25] = "The flames of war unify.";
	char	*dup;

	ft_putstr("Original string: ");
	ft_putendl(str);
	ft_putstr("Duplicate string: ");
	dup = ft_strdup(str);
	ft_putendl(dup);
	return (0);
}
