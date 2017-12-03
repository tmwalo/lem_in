/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 11:34:28 by tmwalo            #+#    #+#             */
/*   Updated: 2017/06/26 12:15:49 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	int		fd;
	char	*line;
	int		ret;
	
	fd = open("gnl_test_text", O_RDONLY);
	if (fd != -1)
	{
		while ((ret = get_next_line(fd, &line)) == 1)
		{
			printf("%s\n", line);
			free(line);
		}
		close(fd);
		if (ret == 0)
			printf("End of file has been reached.\n");
	}
	return (0);
}
