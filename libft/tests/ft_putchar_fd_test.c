/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 14:32:06 by tmwalo            #+#    #+#             */
/*   Updated: 2017/05/25 15:51:22 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
	int fd;

	fd = open("ft_putchar_fd_test_file.txt",O_WRONLY | O_CREAT | O_APPEND,S_IRWXU);
	if (fd == (-1))
		return (0);
	ft_putchar_fd('Z',fd);
	ft_putchar_fd('\n',fd);
	close(fd);
	return (0);
}
