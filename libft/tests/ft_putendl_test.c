/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 14:23:20 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/26 14:24:57 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
	char const	str[] = "kneel before my psycho power";
	
	ft_putendl(str);
	write(1,"\n",1);
	return (0);
}
