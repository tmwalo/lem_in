/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:25:52 by tmwalo            #+#    #+#             */
/*   Updated: 2017/07/27 12:29:18 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_next_char(const int fd)
{
	static char		buffer[BUFF_SIZE + 1];
	static char		*buffer_pos = buffer;
	static int		bytes_read = 0;

	if (bytes_read == 0)
	{
		bytes_read = read(fd, buffer, BUFF_SIZE);
		if (bytes_read > 0)
			buffer[bytes_read] = '\0';
		buffer_pos = buffer;
	}
	if (bytes_read == -1)
		return (-1);
	else if (bytes_read == 0)
		return (-2);
	else
	{
		--bytes_read;
		return ((unsigned char)*buffer_pos++);
	}
}

static char	*resize_line(char **line_ptr, unsigned int size, unsigned int len)
{
	char	*resized_ptr;

	if (!line_ptr)
		return (0);
	resized_ptr = ft_strnew(size);
	if (!resized_ptr)
		return (0);
	ft_memmove(resized_ptr, *line_ptr, len);
	free(*line_ptr);
	*line_ptr = 0;
	return (resized_ptr);
}

static int	line_space(char **line, char **line_pos, char **end_line, int len)
{
	if (*line_pos == *end_line)
	{
		*line = resize_line(line, len + BUFF_SIZE, len);
		if (!*line)
			return (-1);
		*line_pos = *line + len;
		*end_line = *line_pos + BUFF_SIZE;
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	char	c;
	char	*line_pos;
	char	*end_line;
	int		line_len;

	if (!line)
		return (-1);
	*line = ft_strnew(BUFF_SIZE);
	if (!*line)
		return (-1);
	line_pos = *line;
	end_line = line_pos + BUFF_SIZE;
	line_len = 0;
	while (((c = get_next_char(fd)) != -1) && (c != -2) && (c != '\n'))
	{
		if (line_space(line, &line_pos, &end_line, line_len) == -1)
			return (-1);
		*line_pos++ = c;
		++line_len;
	}
	if (c == -1)
		return (-1);
	else if ((c == -2) && (line_len == 0))
		return (0);
	return (1);
}
