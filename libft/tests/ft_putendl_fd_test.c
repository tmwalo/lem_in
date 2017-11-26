/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 13:57:47 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/26 14:16:54 by tmwalo           ###   ########.fr       */
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
	
	fd = open("ft_putendl_fd_test_file.txt",O_WRONLY | O_CREAT | O_APPEND,S_IRWXU);
	if (fd == (-1))
		return (0);
	ft_putendl_fd(str,fd);
	write(fd,"\n",1);
	close(fd);
	return (0);
}
