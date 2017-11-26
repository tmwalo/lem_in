/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 13:10:30 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/26 13:19:01 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
	char const	str[] = "kneel before my psycho power";
	
	ft_putstr(str);
	write(1,"\n",1);
	return (0);
}
