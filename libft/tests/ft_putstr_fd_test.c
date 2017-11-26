/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_terst.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 10:57:37 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/26 11:25:16 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
	char const	str[] = "kneel before my psycho power";
	int		fd;
	
	fd = open("ft_putstr_fd_test_file.txt",O_WRONLY | O_CREAT | O_APPEND,S_IRWXU);
	if (fd == (-1))
		return (0);
	ft_putstr_fd(str,fd);
	write(fd,"\n",1);
	close(fd);
	return (0);
}
